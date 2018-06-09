package com.cxu.jni;

public class HelloWorld {

    static {
        System.loadLibrary("Hello.so");
    }

    public native void DisplayHello();

    public static void main(String[] args) {
        new HelloWorld().DisplayHello();
    }
}
