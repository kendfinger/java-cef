/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_CefApp */

#ifndef _Included_org_cef_CefApp
#define _Included_org_cef_CefApp
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_CefApp
 * Method:    N_Initialize
 * Signature: (Ljava/lang/String;Lorg/cef/CefAppHandler;Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_CefApp_N_1Initialize
  (JNIEnv *, jobject, jstring, jobject, jstring, jboolean);

/*
 * Class:     org_cef_CefApp
 * Method:    N_Shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_CefApp_N_1Shutdown
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_CefApp
 * Method:    N_DoMessageLoopWork
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_CefApp_N_1DoMessageLoopWork
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_CefApp
 * Method:    N_CreateBrowser
 * Signature: (Lorg/cef/CefClientHandler;JLjava/lang/String;ZLjava/awt/Canvas;)Lorg/cef/CefBrowser;
 */
JNIEXPORT jobject JNICALL Java_org_cef_CefApp_N_1CreateBrowser
  (JNIEnv *, jobject, jobject, jlong, jstring, jboolean, jobject);

/*
 * Class:     org_cef_CefApp
 * Method:    N_GetWindowHandle
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_cef_CefApp_N_1GetWindowHandle
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
