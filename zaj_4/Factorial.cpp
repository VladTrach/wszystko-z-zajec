//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Factorial.cpp
//  @ Date : 19.03.2018
//  @ Author :
//
//


#include "Factorial.h"

int Factorial::getResult(int num) {
    if (n >= 1)
        return num*getResult(num-1);
    else
        return 1;
}

