/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jpy_DL */

#ifndef _Included_org_jpy_DL
#define _Included_org_jpy_DL
#ifdef __cplusplus
extern "C" {
#endif
#undef org_jpy_DL_RTLD_LAZY
#define org_jpy_DL_RTLD_LAZY 1L
#undef org_jpy_DL_RTLD_NOW
#define org_jpy_DL_RTLD_NOW 2L
#undef org_jpy_DL_RTLD_LOCAL
#define org_jpy_DL_RTLD_LOCAL 4L
#undef org_jpy_DL_RTLD_GLOBAL
#define org_jpy_DL_RTLD_GLOBAL 8L
/*
 * Class:     org_jpy_DL
 * Method:    dlopen
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_jpy_DL_dlopen
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_jpy_DL
 * Method:    dlclose
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jpy_DL_dlclose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jpy_DL
 * Method:    dlerror
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jpy_DL_dlerror
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
