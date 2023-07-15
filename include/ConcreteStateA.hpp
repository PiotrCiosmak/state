#pragma once

#include "../include/ConcreteStateB.hpp"
#include "State.hpp"

class ConcreteStateA : public State
{
public:
    void handle1() override;
    void handle2() override;
};
