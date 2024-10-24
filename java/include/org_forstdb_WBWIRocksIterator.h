/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_WBWIRocksIterator */

#ifndef _Included_org_forstdb_WBWIRocksIterator
#define _Included_org_forstdb_WBWIRocksIterator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    isValid0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_WBWIRocksIterator_isValid0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    seekToFirst0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_seekToFirst0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    seekToLast0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_seekToLast0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    next0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_next0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    prev0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_prev0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    refresh0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_refresh0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    seek0
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_seek0
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    seekForPrev0
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_seekForPrev0
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    status0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_status0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    seekDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_seekDirect0
  (JNIEnv *, jobject, jlong, jobject, jint, jint);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    seekForPrevDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_seekForPrevDirect0
  (JNIEnv *, jobject, jlong, jobject, jint, jint);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    seekByteArray0
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_seekByteArray0
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    seekForPrevByteArray0
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_WBWIRocksIterator_seekForPrevByteArray0
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_forstdb_WBWIRocksIterator
 * Method:    entry1
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_forstdb_WBWIRocksIterator_entry1
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
