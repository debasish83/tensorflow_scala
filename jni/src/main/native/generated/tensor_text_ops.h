/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_platanios_tensorflow_jni_generated_tensors_Text__ */

#ifndef _Included_org_platanios_tensorflow_jni_generated_tensors_Text__
#define _Included_org_platanios_tensorflow_jni_generated_tensors_Text__
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_platanios_tensorflow_jni_generated_tensors_Text__
 * Method:    stringJoin
 * Signature: (J[J[B)J
 */
JNIEXPORT jlong JNICALL Java_org_platanios_tensorflow_jni_generated_tensors_Text_00024_stringJoin
  (JNIEnv *, jobject, jlong, jlongArray, jbyteArray);

/*
 * Class:     org_platanios_tensorflow_jni_generated_tensors_Text__
 * Method:    stringSplit
 * Signature: (JJJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_platanios_tensorflow_jni_generated_tensors_Text_00024_stringSplit
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_platanios_tensorflow_jni_generated_tensors_Text__
 * Method:    encodeBase64
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_platanios_tensorflow_jni_generated_tensors_Text_00024_encodeBase64
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     org_platanios_tensorflow_jni_generated_tensors_Text__
 * Method:    decodeBase64
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_platanios_tensorflow_jni_generated_tensors_Text_00024_decodeBase64
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_platanios_tensorflow_jni_generated_tensors_Text__
 * Method:    stringToHashBucket
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_platanios_tensorflow_jni_generated_tensors_Text_00024_stringToHashBucket
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_platanios_tensorflow_jni_generated_tensors_Text__
 * Method:    stringToHashBucketFast
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_platanios_tensorflow_jni_generated_tensors_Text_00024_stringToHashBucketFast
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_platanios_tensorflow_jni_generated_tensors_Text__
 * Method:    stringToHashBucketStrong
 * Signature: (JJJ[J)J
 */
JNIEXPORT jlong JNICALL Java_org_platanios_tensorflow_jni_generated_tensors_Text_00024_stringToHashBucketStrong
  (JNIEnv *, jobject, jlong, jlong, jlong, jlongArray);

#ifdef __cplusplus
}
#endif
#endif
