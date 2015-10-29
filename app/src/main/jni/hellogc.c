#include <jni.h>

JNIEXPORT jstring JNICALL
Java_tencent_cheneygeng_firstjni_GcJni_getString(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "hello1234");
}