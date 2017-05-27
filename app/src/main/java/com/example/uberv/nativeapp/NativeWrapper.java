package com.example.uberv.nativeapp;

public class NativeWrapper {

    // Declare any methods with a C/C++ implementation as native
    public static native void nativeMethod();

    static {
        // Tell the runtime to load your shared library, in this case "libnative_wrapper.so"
        System.loadLibrary("native_wrapper");
    }
}
