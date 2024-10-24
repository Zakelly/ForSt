/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_ReadOptions */

#ifndef _Included_org_forstdb_ReadOptions
#define _Included_org_forstdb_ReadOptions
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_forstdb_ReadOptions
 * Method:    newReadOptions
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_newReadOptions__
  (JNIEnv *, jclass);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    newReadOptions
 * Signature: (ZZ)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_newReadOptions__ZZ
  (JNIEnv *, jclass, jboolean, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    copyReadOptions
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_copyReadOptions
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    verifyChecksums
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_verifyChecksums
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setVerifyChecksums
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setVerifyChecksums
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    fillCache
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_fillCache
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setFillCache
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setFillCache
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    snapshot
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_snapshot
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setSnapshot
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setSnapshot
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    readTier
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_forstdb_ReadOptions_readTier
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setReadTier
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setReadTier
  (JNIEnv *, jobject, jlong, jbyte);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    tailing
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_tailing
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setTailing
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setTailing
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    managed
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_managed
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setManaged
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setManaged
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    totalOrderSeek
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_totalOrderSeek
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setTotalOrderSeek
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setTotalOrderSeek
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    prefixSameAsStart
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_prefixSameAsStart
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setPrefixSameAsStart
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setPrefixSameAsStart
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    pinData
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_pinData
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setPinData
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setPinData
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    backgroundPurgeOnIteratorCleanup
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_backgroundPurgeOnIteratorCleanup
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setBackgroundPurgeOnIteratorCleanup
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setBackgroundPurgeOnIteratorCleanup
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    readaheadSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_readaheadSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setReadaheadSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setReadaheadSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    maxSkippableInternalKeys
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_maxSkippableInternalKeys
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setMaxSkippableInternalKeys
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setMaxSkippableInternalKeys
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    ignoreRangeDeletions
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_ignoreRangeDeletions
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setIgnoreRangeDeletions
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setIgnoreRangeDeletions
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setIterateUpperBound
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setIterateUpperBound
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    iterateUpperBound
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_iterateUpperBound
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setIterateLowerBound
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setIterateLowerBound
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    iterateLowerBound
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_iterateLowerBound
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setTableFilter
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setTableFilter
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    autoPrefixMode
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_ReadOptions_autoPrefixMode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setAutoPrefixMode
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setAutoPrefixMode
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    timestamp
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_timestamp
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setTimestamp
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setTimestamp
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    iterStartTs
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_iterStartTs
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setIterStartTs
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setIterStartTs
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    deadline
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_deadline
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setDeadline
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setDeadline
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    ioTimeout
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_ioTimeout
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setIoTimeout
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setIoTimeout
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    valueSizeSoftLimit
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_ReadOptions_valueSizeSoftLimit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_ReadOptions
 * Method:    setValueSizeSoftLimit
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_ReadOptions_setValueSizeSoftLimit
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
