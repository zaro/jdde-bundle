# ABOUT

[JDDE](http://jdde.pretty-tools.com/) , packaged as maven artifact.

> JDDE is JNI based FREE open source Java library which allows Java applications to communicate with native applications on Windows platform via Dynamic Data Exchange (DDE) protocol.

Additionally if the native libraries cannot be loaded from java.library.path, this version will load them from the jar.

To extract the bundled native libraries  you can use :

    <build>
    <plugins>
    ......
    <plugin>
        <groupId>org.apache.maven.plugins</groupId>
        <artifactId>maven-dependency-plugin</artifactId>
        <executions>
            <execution>
                <id>unpack</id>
                <phase>prepare-package</phase>
                <goals>
                    <goal>unpack</goal>
                </goals>
                <configuration>
                    <artifactItems>
                        <artifactItem>
                       <groupId>com.pretty-tools</groupId>
                       <artifactId>jdde-bundle</artifactId>
                       <version>2.0.3</version>
                       <type>jar</type>
                            <includes>com/pretty_tools/dde/*.dll</includes>
                            <outputDirectory>${project.build.directory}/jdde</outputDirectory>
                        </artifactItem>
                    </artifactItems>
                </configuration>
            </execution>
        </executions>
    </plugin>
    .....         
    </plugins>
    </build>

## LICENSE

Apache License, Version 2.0.

see http://jdde.pretty-tools.com/downloads.php for more details.

## AUTHORS

Alexander Kozlov (alex@pretty-tools.com)
Svetlozar Argirov (zarrro@gmail.com)
