#pragma once
#include "Area.h"
class Rectangle :
    public Area
{
    int b, h;
public:
    void getInputs();
    float showArea();
};

