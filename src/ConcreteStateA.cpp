#include "../include/ConcreteStateA.hpp"

void ConcreteStateA::handle1()
{
    std::cout << "ConcreteStateA handles request1." << std::endl;
    std::cout << "ConcreteStateA wants to change the state of the context." << std::endl;
    this->context->transitionTo(new ConcreteStateB);
}

void ConcreteStateA::handle2()
{
    std::cout << "ConcreteStateA handles request2." << std::endl;
}
