#include <jni.h>

#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_sandymist_hellojni_HelloJNIApplicationKt_stringFromJNI(JNIEnv *env,
                                                                __attribute__((unused)) jclass clazz) {
    std::string hello = "Hello *message* from JNI.";
    return env->NewStringUTF(hello.c_str());
}