/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_CompressionOptions */

#ifndef _Included_org_forstdb_CompressionOptions
#define _Included_org_forstdb_CompressionOptions
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    newCompressionOptions
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_CompressionOptions_newCompressionOptions
  (JNIEnv *, jclass);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompressionOptions_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    setWindowBits
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompressionOptions_setWindowBits
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    windowBits
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompressionOptions_windowBits
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    setLevel
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompressionOptions_setLevel
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    level
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompressionOptions_level
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    setStrategy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompressionOptions_setStrategy
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    strategy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompressionOptions_strategy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    setMaxDictBytes
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompressionOptions_setMaxDictBytes
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    maxDictBytes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompressionOptions_maxDictBytes
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    setZstdMaxTrainBytes
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompressionOptions_setZstdMaxTrainBytes
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    zstdMaxTrainBytes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompressionOptions_zstdMaxTrainBytes
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    setEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompressionOptions_setEnabled
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_CompressionOptions
 * Method:    enabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_CompressionOptions_enabled
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
