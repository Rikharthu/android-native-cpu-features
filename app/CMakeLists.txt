# set the version of CMake to be used for this build
cmake_minimum_required(VERSION 3.4.1)

# add a library to the project using the specified source files
# this builds shared library from sources at NativeLib.c called "features"
add_library(features SHARED src/main/jni/NativeLib.c )

# add the given directories to those the compiler uses to search for include files (.h)
# include headers that belong to additional external libraries that are not on the default NDK path
include_directories(${ANDROID_NDK}/sources/android/cpufeatures )

# build cpu-features library and set it's target name to "cpufeatures"
add_library(cpufeatures STATIC ${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c )

# several libraries are automatically included in the NDK build path
# no need to use add_library() or include_directories() on those - just find the,
# see https://developer.android. com/ndk/reference/index.html
find_library(log-lib log )

# final CMake call, which tells how to construct the final shared library that will be included in an APK
# first parameter - a library to to which other libs will be linked (our library)
target_link_libraries(features cpufeatures ${log-lib} )