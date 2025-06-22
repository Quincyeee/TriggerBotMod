#include <jni.h>
#include <stdlib.h>
#include <stdio.h>

JNIEXPORT jboolean JNICALL Java_com_example_happyclient_AndroidClicker_simulateClick(JNIEnv* env, jclass cls, jint x, jint y) {
    char cmd[64];
    snprintf(cmd, sizeof(cmd), "input tap %d %d", x, y);
    int ret = system(cmd);
    return (ret == 0) ? JNI_TRUE : JNI_FALSE;
}