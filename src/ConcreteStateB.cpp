#include "../include/ConcreteStateB.hpp"

void ConcreteStateB::handle1()
{
    std::cout << "ConcreteStateB handles request1." << std::endl;
}

void ConcreteStateB::handle2()
{
    std::cout << "ConcreteStateB handles request2." << std::endl;
    std::cout << "ConcreteStateB wants to change the state of the context." << std::endl;
    this->context->transitionTo(new ConcreteStateA);
}
