"""
 ============================================================================
 Name        : libpybind.py
 Author      : HJ
 Version     :
 Copyright   : no strings attached
 Description : calling C functions from python
 ============================================================================
"""

import ctypes

# export LD_LIBRARY_PATH=
# OR use absolute path           
lib = ctypes.CDLL("libpybind.so")
           
lib.print_int.argtypes = [ctypes.c_int]
 
returnVale = lib.print_int(42)

lib.print_str.argtypes = [ctypes.c_wchar_p]
 
returnVale = lib.print_str("hello")

