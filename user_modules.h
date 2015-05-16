// email=dani.eichhorn@squix.ch
// branch=master
// modules=node,file,gpio,i2c,bit,u8g
#ifndef __USER_MODULES_H__
#define __USER_MODULES_H__

#define LUA_USE_BUILTIN_STRING		// for string.xxx()
#define LUA_USE_BUILTIN_TABLE		// for table.xxx()
#define LUA_USE_BUILTIN_COROUTINE	// for coroutine.xxx()
#define LUA_USE_BUILTIN_MATH		// for math.xxx(), partially work
// #define LUA_USE_BUILTIN_IO 			// for io.xxx(), partially work

// #define LUA_USE_BUILTIN_OS			// for os.xxx(), not work
// #define LUA_USE_BUILTIN_DEBUG		// for debug.xxx(), not work

#define LUA_USE_MODULES

#ifdef LUA_USE_MODULES
#define LUA_USE_MODULES_NODE
#define LUA_USE_MODULES_FILE
#define LUA_USE_MODULES_GPIO
#define LUA_USE_MODULES_I2C
#define LUA_USE_MODULES_BIT
#define LUA_USE_MODULES_U8G

#endif /* LUA_USE_MODULES */

#endif	/* __USER_MODULES_H__ */
