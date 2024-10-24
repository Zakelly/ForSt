/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_EnvOptions */

#ifndef _Included_org_forstdb_EnvOptions
#define _Included_org_forstdb_EnvOptions
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_forstdb_EnvOptions
 * Method:    newEnvOptions
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_EnvOptions_newEnvOptions__
  (JNIEnv *, jclass);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    newEnvOptions
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_EnvOptions_newEnvOptions__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setUseMmapReads
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setUseMmapReads
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    useMmapReads
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_EnvOptions_useMmapReads
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setUseMmapWrites
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setUseMmapWrites
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    useMmapWrites
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_EnvOptions_useMmapWrites
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setUseDirectReads
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setUseDirectReads
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    useDirectReads
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_EnvOptions_useDirectReads
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setUseDirectWrites
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setUseDirectWrites
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    useDirectWrites
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_EnvOptions_useDirectWrites
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setAllowFallocate
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setAllowFallocate
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    allowFallocate
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_EnvOptions_allowFallocate
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setSetFdCloexec
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setSetFdCloexec
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setFdCloexec
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_EnvOptions_setFdCloexec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setBytesPerSync
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setBytesPerSync
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    bytesPerSync
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_EnvOptions_bytesPerSync
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setFallocateWithKeepSize
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setFallocateWithKeepSize
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    fallocateWithKeepSize
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_EnvOptions_fallocateWithKeepSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setCompactionReadaheadSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setCompactionReadaheadSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    compactionReadaheadSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_EnvOptions_compactionReadaheadSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setRandomAccessMaxBufferSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setRandomAccessMaxBufferSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    randomAccessMaxBufferSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_EnvOptions_randomAccessMaxBufferSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setWritableFileMaxBufferSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setWritableFileMaxBufferSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    writableFileMaxBufferSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_EnvOptions_writableFileMaxBufferSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_EnvOptions
 * Method:    setRateLimiter
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_EnvOptions_setRateLimiter
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
