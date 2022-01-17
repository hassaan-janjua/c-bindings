/*
 ============================================================================
 Name        : libpybind.c
 Author      : HJ
 Version     :
 Copyright   : no strings attached
 Description : C functions to be called by python
 Compilation : gcc -fPIC -shared -o libpybind.so libpybind.c
 ============================================================================
 */


#include <stdio.h>
#include <stddef.h>
#include <locale.h>

int print_str(wchar_t *str) {
	char* l = setlocale(LC_ALL, NULL);
	int r;
	setlocale(LC_ALL, "C.UTF-8");
	r = printf("%ls\n", str);
	setlocale(LC_ALL, l);
	return r;
}


int print_int(int i) {
	return printf("%d\n", i);
}
