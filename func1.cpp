#include "func1.h"
#include <iostream>

func1::func1()
{

}

void func1::display()
{
    std::cout << "func1::display()" << std::endl;
}


std::shared_ptr<IFunc> funcInit()
{
    return std::make_shared<func1>();
}
