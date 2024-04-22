#pragma once
#include "Area.h"
class Circle :
    public Area
{
    int r;
public:
    void getInputs();
    float showArea();
};

