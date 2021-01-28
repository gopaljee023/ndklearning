#include <jni.h>
#include <string>




extern "C" JNIEXPORT jstring JNICALL
Java_com_gjee_ndllearning_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_gjee_ndllearning_MainActivity_add(JNIEnv *env, jobject thiz, jint x, jint y) {
     printf("Adding in c++");
    return 3+4;
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_gjee_ndllearning_MainActivity_hash(JNIEnv *env, jobject thiz, jint x) {
    // TODO: implement hash()
}extern "C"
JNIEXPORT jint JNICALL
Java_com_gjee_ndllearning_MainActivity_subtract(JNIEnv *env, jobject thiz, jint x, jint y) {
    // TODO: implement subtract()
}extern "C"
JNIEXPORT jint JNICALL
Java_com_gjee_ndllearning_MainActivity_divide(JNIEnv *env, jobject thiz, jint x, jint y) {
    // TODO: implement divide()
}

/** macro to make method declartion less cumbersome
*/

#define JNI_METHOD(RETURN,METHOD_NAME) \
extern "C" JNIEXPORT RETURN JNICALL Java_com_gjee_ndllearning_MainActivity_##METHOD_NAME

JNI_METHOD(jint, multiply)(JNIEnv *env, jobject thiz, jint x, jint y) {
    return x*y;
}




extern "C"
JNIEXPORT jint JNICALL
Java_com_gjee_ndllearning_MainActivity_multiply1(JNIEnv *env, jobject thiz, jint x, jint y) {
    // TODO: implement multiply1()
}