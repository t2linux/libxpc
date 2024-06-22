#ifndef XPC_DEBUG_H
#define XPC_DEBUG_H

#include <stdio.h>
#include "xpc.h"

typedef void (*xpc_debug_write)(const char *str, void *userData);

void xpc_debug_print(xpc_object_t obj, xpc_debug_write out, void *userData);
void xpc_debug_print_stdout(xpc_object_t obj);
void xpc_debug_print_helper(xpc_object_t obj, FILE *outFile);

#endif //XPC_DEBUG_H
