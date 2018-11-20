#ifndef FUNC1_H
#define FUNC1_H

#include "IFunc.h"
#include <iostream>

class func1 : public IFunc
{
public:
    func1();
    void display() override;
};

extern "C" __declspec(dllexport) std::shared_ptr<IFunc> funcInit(void);

extern "C" __declspec(dllexport) int Add(int X, int Y)
{
    return X+Y;
}

#endif // FUNC1_H
