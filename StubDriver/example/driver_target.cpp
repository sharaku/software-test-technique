// シンボルをweakにする.
#pragma weak _ZN6sample8functionEi
#pragma weak _ZN6sample9function1Es
#pragma weak _ZN6sample9function2Eb

#include "target.cpp"

#pragma weak _ZN6sample15driver_functionEi = _ZN6sample8functionEi
#pragma weak _ZN6sample16driver_function1Es = _ZN6sample9function1Es
#pragma weak _ZN6sample16driver_function2Eb = _ZN6sample9function2Eb

