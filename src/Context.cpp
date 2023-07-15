#include "../include/Context.hpp"

Context::Context(State* new_state) : state{}
{
    this->transitionTo(new_state);
}

void Context::transitionTo(State* state)
{
    std::cout << "Context: Transition to " << typeid(*state).name() << ".\n";
    if (this->state)
    {
        delete this->state;
    }
    this->state = state;
    this->state->setContex(this);
}

void Context::request1()
{
    this->state->handle1();
}

void Context::request2()
{
    this->state->handle2();
}

Context::~Context()
{
    delete state;
}
