#include <iostream>
#include "include/Context.hpp"
#include "include/ConcreteStateA.hpp"

void clientCode();

int main()
{
    clientCode();
}

void clientCode()
{
    Context* context = new Context(new ConcreteStateA);
    context->request1();
    context->request2();
    delete context;
}