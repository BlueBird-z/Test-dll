#include <windows.h>

#define EXPORT __declspec (dllexport)


EXPORT int Square( int X)   // Return Square
 {
    return X*X;
 }

EXPORT int Cube( int X)     // Return Cube
 {
    return X*X*X;
 }
