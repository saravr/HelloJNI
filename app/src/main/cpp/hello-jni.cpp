#include <jni.h>

#include <string>

extern "C" JNIEXPORT jstring
Java_com_sandymist_hellojni_HelloJni_stringFromJNI(JNIEnv* env,
                                                 jobject /* this */) {
    std::string hello = "Hello *message* from JNI.";
    return env->NewStringUTF(hello.c_str());
}