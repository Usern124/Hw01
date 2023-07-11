#pragma once
#include <iostream>
class Incorrect_params :
    public std::exception
{
public:
    Incorrect_params(const char* str);
};

