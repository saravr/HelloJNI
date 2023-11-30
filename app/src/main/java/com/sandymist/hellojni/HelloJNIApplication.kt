package com.sandymist.hellojni

import android.app.Application

external fun stringFromJNI(): String

class HelloJNIApplication: Application() {
    companion object {
        init {
            System.loadLibrary("hello-jni")
        }
    }
}