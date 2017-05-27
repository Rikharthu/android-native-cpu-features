// must inlude jni header
#include <jni.h>
/* Header for class com_example_uberv_nativeapp_NativeLib */

#ifndef _Included_com_example_uberv_nativeapp_NativeLib
#define _Included_com_example_uberv_nativeapp_NativeLib
#ifdef __cplusplus
extern "C" {
#endif

// The long method names are used to uniquely identify each method inside the shared library
// and follow the scheme:
// JNIEXPORT <return_type> Java_<package_name>_<class_name>_<method_name>
// Method takes matching parameters for each parameter in Java method (int-jint and etc)
// as well as JNIEnv pointer and jclass object
// The JNIEnv pointer is a reference to the JNI API functions that can be invoked from native code
// and jclass is a reference to the owning Java class this method is attached to (present since method is static)
// For non-static method it would be jobject, that would reference the owning object instance of method call ('this' keyword)

/*
 * Class:     com_example_uberv_nativeapp_NativeLib
 * Method:    getCpuCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_uberv_nativeapp_NativeLib_getCpuCount
  (JNIEnv *, jclass);

/*
 * Class:     com_example_uberv_nativeapp_NativeLib
 * Method:    getCpuFamily
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_uberv_nativeapp_NativeLib_getCpuFamily
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
