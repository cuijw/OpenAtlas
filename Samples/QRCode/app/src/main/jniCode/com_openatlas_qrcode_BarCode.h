/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_openatlas_qrcode_BarCode */

#ifndef _Included_com_openatlas_qrcode_BarCode
#define _Included_com_openatlas_qrcode_BarCode
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_openatlas_qrcode_BarCode
 * Method:    decodeRaw
 * Signature: ([BII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openatlas_qrcode_BarCode_decodeRaw
  (JNIEnv *, jclass, jbyteArray, jint, jint);

/*
 * Class:     com_openatlas_qrcode_BarCode
 * Method:    decodeCrop
 * Signature: ([BIIIIII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openatlas_qrcode_BarCode_decodeCrop
  (JNIEnv *, jclass, jbyteArray, jint, jint, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
