/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_SstFileReader */

#ifndef _Included_org_forstdb_SstFileReader
#define _Included_org_forstdb_SstFileReader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_forstdb_SstFileReader
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_SstFileReader_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_SstFileReader
 * Method:    newIterator
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_SstFileReader_newIterator
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_SstFileReader
 * Method:    open
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_SstFileReader_open
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_forstdb_SstFileReader
 * Method:    newSstFileReader
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_SstFileReader_newSstFileReader
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_forstdb_SstFileReader
 * Method:    verifyChecksum
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_SstFileReader_verifyChecksum
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_SstFileReader
 * Method:    getTableProperties
 * Signature: (J)Lorg/forstdb/TableProperties;
 */
JNIEXPORT jobject JNICALL Java_org_forstdb_SstFileReader_getTableProperties
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
