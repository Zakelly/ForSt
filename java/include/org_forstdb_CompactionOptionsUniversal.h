/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_CompactionOptionsUniversal */

#ifndef _Included_org_forstdb_CompactionOptionsUniversal
#define _Included_org_forstdb_CompactionOptionsUniversal
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    newCompactionOptionsUniversal
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_CompactionOptionsUniversal_newCompactionOptionsUniversal
  (JNIEnv *, jclass);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsUniversal_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    setSizeRatio
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsUniversal_setSizeRatio
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    sizeRatio
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompactionOptionsUniversal_sizeRatio
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    setMinMergeWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsUniversal_setMinMergeWidth
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    minMergeWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompactionOptionsUniversal_minMergeWidth
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    setMaxMergeWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsUniversal_setMaxMergeWidth
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    maxMergeWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompactionOptionsUniversal_maxMergeWidth
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    setMaxSizeAmplificationPercent
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsUniversal_setMaxSizeAmplificationPercent
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    maxSizeAmplificationPercent
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompactionOptionsUniversal_maxSizeAmplificationPercent
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    setCompressionSizePercent
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsUniversal_setCompressionSizePercent
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    compressionSizePercent
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_forstdb_CompactionOptionsUniversal_compressionSizePercent
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    setStopStyle
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsUniversal_setStopStyle
  (JNIEnv *, jobject, jlong, jbyte);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    stopStyle
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_forstdb_CompactionOptionsUniversal_stopStyle
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    setAllowTrivialMove
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsUniversal_setAllowTrivialMove
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_CompactionOptionsUniversal
 * Method:    allowTrivialMove
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_CompactionOptionsUniversal_allowTrivialMove
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
