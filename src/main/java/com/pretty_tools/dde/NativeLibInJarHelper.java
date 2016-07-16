package com.pretty_tools.dde;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

public class NativeLibInJarHelper {
	
	static File libTempFile;

	public static File extractLibrary(String libraryResourcePath){
		ClassLoader loader = NativeLibInJarHelper.class.getClassLoader(); 
        InputStream is = loader.getResourceAsStream(libraryResourcePath);
        if (is == null) {
            return null;
        }

        FileOutputStream fos = null;
        File lib = null;
        try {
            lib = File.createTempFile("jdde", ".dll");
            lib.deleteOnExit();
            fos = new FileOutputStream(lib);
            int count;
            byte[] buf = new byte[4096];
            while ((count = is.read(buf, 0, buf.length)) > 0) {
                fos.write(buf, 0, count);
            }
        }
        catch(IOException e) {
        	lib = null;
        }
        finally {
            try { is.close(); } catch(IOException e) { }
            if (fos != null) {
                try { fos.close(); } catch(IOException e) { }
            }
        }
        return lib;
	}
	
	public static void loadLibrary(String libname, String resourcePrefix){
		//System.out.println("loadLibrary (" +libname + ", " +resourcePrefix + ")");
		try {
			System.loadLibrary(libname);
		} catch( UnsatisfiedLinkError e){
			//e.printStackTrace();
			if (libTempFile == null) {
				libTempFile = extractLibrary(resourcePrefix + libname + ".dll");
			}
			if( libTempFile != null ){
				//System.out.println("loadLibrary Using extracted version: " +libTempFile.getAbsolutePath());
				System.load(libTempFile.getAbsolutePath());
			} else {
				//System.out.println("loadLibrary failed to extract: " + resourcePrefix + libname);
				throw e;
			}
		}
	}
	
}
