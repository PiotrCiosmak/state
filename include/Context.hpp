#pragma once

#include "State.hpp"
#include <iostream>

class State;

class Context
{
public:
    explicit Context(State* new_state);
    void transitionTo(State* state);
    void request1();
    void request2();
    ~Context();

private:
    State* state;
};
