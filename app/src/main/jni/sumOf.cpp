#include <jni.h>
#include <string>
#include <sstream>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_administrator_myapplication_MainActivity_sumof(
        JNIEnv* env,
        jobject, /* this */
        jint x,
        jint y) {
    std::ostringstream sumChar;
    int sum;
    sum = x + y;
    sumChar << sum;
    std::string sumString = sumChar.str();
    return env->NewStringUTF( (std::string("sumof x + y = ") + sumString).c_str() );
}
