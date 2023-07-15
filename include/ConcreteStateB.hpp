#pragma once

#include "../include/ConcreteStateA.hpp"
#include "State.hpp"

class ConcreteStateB : public State
{
public:
    void handle1() override;
    void handle2() override;
};
