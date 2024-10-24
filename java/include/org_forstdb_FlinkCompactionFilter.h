/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_FlinkCompactionFilter */

#ifndef _Included_org_forstdb_FlinkCompactionFilter
#define _Included_org_forstdb_FlinkCompactionFilter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_forstdb_FlinkCompactionFilter
 * Method:    createNewFlinkCompactionFilter0
 * Signature: (JLorg/forstdb/FlinkCompactionFilter/TimeProvider;J)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_FlinkCompactionFilter_createNewFlinkCompactionFilter0
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     org_forstdb_FlinkCompactionFilter
 * Method:    createNewFlinkCompactionFilterConfigHolder
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_FlinkCompactionFilter_createNewFlinkCompactionFilterConfigHolder
  (JNIEnv *, jclass);

/*
 * Class:     org_forstdb_FlinkCompactionFilter
 * Method:    disposeFlinkCompactionFilterConfigHolder
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_forstdb_FlinkCompactionFilter_disposeFlinkCompactionFilterConfigHolder
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_forstdb_FlinkCompactionFilter
 * Method:    configureFlinkCompactionFilter
 * Signature: (JIIJJILorg/forstdb/FlinkCompactionFilter/ListElementFilterFactory;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_forstdb_FlinkCompactionFilter_configureFlinkCompactionFilter
  (JNIEnv *, jclass, jlong, jint, jint, jlong, jlong, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif
