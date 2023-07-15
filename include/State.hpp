#pragma once

#include "Context.hpp"

class Context;

class State
{
public:
    virtual void handle1() = 0;
    virtual void handle2() = 0;
    void setContex(Context* contex);
    virtual ~State() = default;
protected:
    Context* context;
};
