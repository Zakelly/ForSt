/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_CompactionOptionsFIFO */

#ifndef _Included_org_forstdb_CompactionOptionsFIFO
#define _Included_org_forstdb_CompactionOptionsFIFO
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_forstdb_CompactionOptionsFIFO
 * Method:    newCompactionOptionsFIFO
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_CompactionOptionsFIFO_newCompactionOptionsFIFO
  (JNIEnv *, jclass);

/*
 * Class:     org_forstdb_CompactionOptionsFIFO
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsFIFO_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsFIFO
 * Method:    setMaxTableFilesSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsFIFO_setMaxTableFilesSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsFIFO
 * Method:    maxTableFilesSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_CompactionOptionsFIFO_maxTableFilesSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_forstdb_CompactionOptionsFIFO
 * Method:    setAllowCompaction
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_CompactionOptionsFIFO_setAllowCompaction
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_forstdb_CompactionOptionsFIFO
 * Method:    allowCompaction
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_CompactionOptionsFIFO_allowCompaction
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
