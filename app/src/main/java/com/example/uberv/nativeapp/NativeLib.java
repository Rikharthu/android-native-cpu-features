package com.example.uberv.nativeapp;

// We use NDK API called "cpufeatures", which allows us to examine the CPU architecture information
// of the device, as well as determine support for certain instruction sets (NEON, SSE3)
public class NativeLib {
    public static final String CPP_LIB_NAME = "features";

    /**
     * Return the number of available cores on the device
     *
     * @return number of available cores on the device
     */
    public static native int getCpuCount();

    /**
     * @return CPU family name
     */
    public static native String getCpuFamily();

    // Load our native library that is implemented in C++
    static {
        System.loadLibrary(CPP_LIB_NAME);
    }
}
