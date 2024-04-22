#pragma once
#include "Area.h"
class Triangle :
    public Area
{
    int b, h;
public:
    void getInputs();
    float showArea();
};

