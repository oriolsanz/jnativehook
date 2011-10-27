/* JNativeHook: Global keyboard and mouse hooking for Java.
 * Copyright (C) 2006-2011 Alexander Barker.  All Rights Received.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _Included_JNativeHook_h
#define _Included_JNativeHook_h

#ifdef UNUSED
#elif defined(__GNUC__)
	#define UNUSED(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
	#define UNUSED(x) /*@unused@*/ x
#else
	#define UNUSED(x) x
#endif

#ifdef DEBUG
	#include <stdio.h>
	#include <unistd.h>
#endif

#include <jni.h>
#include <stdlib.h>
#include <stdbool.h>

//Exception class definitions.
#define NATIVE_HOOK_EXCEPTION	"org/jnativehook/NativeHookException"
#define NATIVE_KEY_EXCEPTION	"org/jnativehook/keyboard/NativeKeyException"
#define NATIVE_MOUSE_EXCEPTION	"org/jnativehook/mouse/NativeMouseException"

//Common function stubs.
extern JavaVM * jvm;
extern void jniFatalError(JNIEnv * env, const char * message);
extern void throwException(JNIEnv * env, const char * classname, const char * message);

#endif
