/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jp_ac_fit_asura_naoji_jal_JALMemory */

#ifndef _Included_jp_ac_fit_asura_naoji_jal_JALMemory
#define _Included_jp_ac_fit_asura_naoji_jal_JALMemory
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1create
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1dispose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _defineKey
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1defineKey
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _removeKey
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1removeKey
  (JNIEnv *, jclass, jint);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _wait
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1wait
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _isRunning
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1isRunning
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _getDataInt
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1getDataInt__JLjava_lang_String_2
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _getDataInt
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1getDataInt__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _getDataFloat
 * Signature: (JLjava/lang/String;)F
 */
JNIEXPORT jfloat JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1getDataFloat__JLjava_lang_String_2
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _getDataFloat
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1getDataFloat__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _getDataString
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1getDataString__JLjava_lang_String_2
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _getDataString
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1getDataString__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _createQuery
 * Signature: (J[Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1createQuery
  (JNIEnv *, jclass, jlong, jobjectArray);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _disposeQuery
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1disposeQuery
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _setBuffer
 * Signature: (JLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1setBuffer
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _setBufferString
 * Signature: (J[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1setBufferString
  (JNIEnv *, jclass, jlong, jobjectArray);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _updateFloat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1updateFloat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _updateInt
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1updateInt
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_ac_fit_asura_naoji_jal_JALMemory
 * Method:    _updateString
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jp_ac_fit_asura_naoji_jal_JALMemory__1updateString
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
