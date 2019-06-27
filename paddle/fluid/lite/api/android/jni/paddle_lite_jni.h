// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_baidu_paddle_lite_PaddlePredictor */

#ifndef PADDLE_FLUID_LITE_API_ANDROID_JNI_PADDLE_LITE_JNI_H_
#define PADDLE_FLUID_LITE_API_ANDROID_JNI_PADDLE_LITE_JNI_H_
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_baidu_paddle_lite_PaddlePredictor
 * Method:    loadMobileModel
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_lite_PaddlePredictor_loadMobileModel(JNIEnv *, jclass,
                                                           jstring);

/*
 * Class:     com_baidu_paddle_lite_PaddlePredictor
 * Method:    clear
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_lite_PaddlePredictor_clear(JNIEnv *, jclass);

/*
 * Class:     com_baidu_paddle_lite_PaddlePredictor
 * Method:    setInput
 * Signature: (I[I[F)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_lite_PaddlePredictor_setInput__I_3I_3F(JNIEnv *, jclass,
                                                             jint, jintArray,
                                                             jfloatArray);

/*
 * Class:     com_baidu_paddle_lite_PaddlePredictor
 * Method:    setInput
 * Signature: (I[I[B)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_lite_PaddlePredictor_setInput__I_3I_3B(JNIEnv *, jclass,
                                                             jint, jintArray,
                                                             jbyteArray);

/*
 * Class:     com_baidu_paddle_lite_PaddlePredictor
 * Method:    run
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_lite_PaddlePredictor_run(JNIEnv *, jclass);

/*
 * Class:     com_baidu_paddle_lite_PaddlePredictor
 * Method:    getFloatOutput
 * Signature: (I)[F
 */
JNIEXPORT jfloatArray JNICALL
Java_com_baidu_paddle_lite_PaddlePredictor_getFloatOutput(JNIEnv *, jclass,
                                                          jint);

/*
 * Class:     com_baidu_paddle_lite_PaddlePredictor
 * Method:    getByteOutput
 * Signature: (I)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_com_baidu_paddle_lite_PaddlePredictor_getByteOutput(JNIEnv *, jclass,
                                                         jint);

/*
 * Class:     com_baidu_paddle_lite_PaddlePredictor
 * Method:    fetchFloat
 * Signature: (Ljava/lang/String;)[F
 */
JNIEXPORT jfloatArray JNICALL
Java_com_baidu_paddle_lite_PaddlePredictor_fetchFloat(JNIEnv *, jclass,
                                                      jstring);

/*
 * Class:     com_baidu_paddle_lite_PaddlePredictor
 * Method:    fetchByte
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_com_baidu_paddle_lite_PaddlePredictor_fetchByte(JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif  // PADDLE_FLUID_LITE_API_ANDROID_JNI_PADDLE_LITE_JNI_H_
