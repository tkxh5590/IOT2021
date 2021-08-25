#include <iostream>
#include <stdio.h>
#include "MyHeader.h"


void swapValue(int a, int  b)
{
    int i = a;
    a = b;
    b = i;
}

void swapRef(int& a, int& b)// 포인터를 사용하지않고 Call By Reference
{
    int i = a;
    a = b;
    b = i;
}

void swapRef(int* a, int* b)
{
    int i = *a;
    *a = *b;
    *b = i;
}