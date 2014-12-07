/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jaeksoft_searchlib_util_bitset_NativeBitSet */

#ifndef _Included_com_jaeksoft_searchlib_util_bitset_NativeBitSet
#define _Included_com_jaeksoft_searchlib_util_bitset_NativeBitSet
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    init
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_init
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_free
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_size
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    set
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_set__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    get
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_get
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    clone
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_clone
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    set
 * Signature: (J[I)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_set__J_3I
  (JNIEnv *, jobject, jlong, jintArray);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    set
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_set__J_3J
  (JNIEnv *, jobject, jlong, jlongArray);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    cardinality
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_cardinality
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    flip
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_flip
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    and
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_and
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    or
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_or
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    clear
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_clear
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_util_bitset_NativeBitSet
 * Method:    nextSetBit
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_util_bitset_NativeBitSet_nextSetBit
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
