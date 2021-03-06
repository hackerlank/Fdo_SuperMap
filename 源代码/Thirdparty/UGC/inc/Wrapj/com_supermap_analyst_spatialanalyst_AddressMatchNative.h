/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_supermap_analyst_spatialanalyst_AddressMatchNative */

#ifndef _Included_com_supermap_analyst_spatialanalyst_AddressMatchNative
#define _Included_com_supermap_analyst_spatialanalyst_AddressMatchNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_supermap_analyst_spatialanalyst_AddressMatchNative
 * Method:    jni_New
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_supermap_analyst_spatialanalyst_AddressMatchNative_jni_1New
  (JNIEnv *, jclass);

/*
 * Class:     com_supermap_analyst_spatialanalyst_AddressMatchNative
 * Method:    jni_Delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_supermap_analyst_spatialanalyst_AddressMatchNative_jni_1Delete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_supermap_analyst_spatialanalyst_AddressMatchNative
 * Method:    jni_Load
 * Signature: (J[J[Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_supermap_analyst_spatialanalyst_AddressMatchNative_jni_1Load
  (JNIEnv *, jclass, jlong, jlongArray, jobjectArray, jstring);

/*
 * Class:     com_supermap_analyst_spatialanalyst_AddressMatchNative
 * Method:    jni_Match
 * Signature: (JLjava/lang/String;[JI)J
 */
JNIEXPORT jlong JNICALL Java_com_supermap_analyst_spatialanalyst_AddressMatchNative_jni_1Match
  (JNIEnv *, jclass, jlong, jstring, jlongArray, jint);

/*
 * Class:     com_supermap_analyst_spatialanalyst_AddressMatchNative
 * Method:    jni_GetDatasetLayerID
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_supermap_analyst_spatialanalyst_AddressMatchNative_jni_1GetDatasetLayerID
  (JNIEnv *, jclass, jlong, jlong);

/*
* Class:     com_supermap_analyst_spatialanalyst_AddressMatchNative
* Method:    jni_GetDatasetLayerIDs
* Signature: (JJ)[I
*/
JNIEXPORT jintArray JNICALL Java_com_supermap_analyst_spatialanalyst_AddressMatchNative_jni_1GetDatasetLayerIDs
(JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
