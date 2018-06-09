#include <jni.h>
#include "com_cxu_jni_HelloWorld.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_com_cxu_jni_HelloWorld_DisplayHello (JNIEnv *env, jobject jobj){

	printf("hello from jni function\n");
	return;

}
