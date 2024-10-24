/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_ConcurrentTaskLimiterImpl */

#ifndef _Included_org_forstdb_ConcurrentTaskLimiterImpl
#define _Included_org_forstdb_ConcurrentTaskLimiterImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_forstdb_ConcurrentTaskLimiterImpl
 * Method:    newConcurrentTaskLimiterImpl0
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ConcurrentTaskLimiterImpl_newConcurrentTaskLimiterImpl0
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_forstdb_ConcurrentTaskLimiterImpl
 * Method:    name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_forstdb_ConcurrentTaskLimiterImpl_name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_forstdb_ConcurrentTaskLimiterImpl
 * Method:    setMaxOutstandingTask
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ConcurrentTaskLimiterImpl_setMaxOutstandingTask
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_forstdb_ConcurrentTaskLimiterImpl
 * Method:    resetMaxOutstandingTask
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ConcurrentTaskLimiterImpl_resetMaxOutstandingTask
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_forstdb_ConcurrentTaskLimiterImpl
 * Method:    outstandingTask
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_ConcurrentTaskLimiterImpl_outstandingTask
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_forstdb_ConcurrentTaskLimiterImpl
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ConcurrentTaskLimiterImpl_disposeInternal
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
