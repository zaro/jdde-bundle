/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pretty_tools_dde_client_DDEClientConversation */

#ifndef _Included_com_pretty_tools_dde_client_DDEClientConversation
#define _Included_com_pretty_tools_dde_client_DDEClientConversation
#ifdef __cplusplus
extern "C" {
#endif
#undef com_pretty_tools_dde_client_DDEClientConversation_DEFAULT_TIMEOUT
#define com_pretty_tools_dde_client_DDEClientConversation_DEFAULT_TIMEOUT 2000L
/*
 * Class:     com_pretty_tools_dde_client_DDEClientConversation
 * Method:    nativeConnect
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_pretty_1tools_dde_client_DDEClientConversation_nativeConnect
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_pretty_tools_dde_client_DDEClientConversation
 * Method:    nativeDisconnect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_pretty_1tools_dde_client_DDEClientConversation_nativeDisconnect
  (JNIEnv *, jobject);

/*
 * Class:     com_pretty_tools_dde_client_DDEClientConversation
 * Method:    nativeExecute
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_pretty_1tools_dde_client_DDEClientConversation_nativeExecute__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_pretty_tools_dde_client_DDEClientConversation
 * Method:    nativeExecute
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_pretty_1tools_dde_client_DDEClientConversation_nativeExecute___3B
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_pretty_tools_dde_client_DDEClientConversation
 * Method:    nativePoke
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_pretty_1tools_dde_client_DDEClientConversation_nativePoke__Ljava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_pretty_tools_dde_client_DDEClientConversation
 * Method:    nativePoke
 * Signature: (Ljava/lang/String;[BI)V
 */
JNIEXPORT void JNICALL Java_com_pretty_1tools_dde_client_DDEClientConversation_nativePoke__Ljava_lang_String_2_3BI
  (JNIEnv *, jobject, jstring, jbyteArray, jint);

/*
 * Class:     com_pretty_tools_dde_client_DDEClientConversation
 * Method:    nativeRequest
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_pretty_1tools_dde_client_DDEClientConversation_nativeRequest
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_pretty_tools_dde_client_DDEClientConversation
 * Method:    nativeStartAdvice
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_pretty_1tools_dde_client_DDEClientConversation_nativeStartAdvice
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_pretty_tools_dde_client_DDEClientConversation
 * Method:    nativeStopAdvice
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_pretty_1tools_dde_client_DDEClientConversation_nativeStopAdvice
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
