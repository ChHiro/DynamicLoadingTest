#ifndef IFUNC_H
#define IFUNC_H

#include <memory>

class IFunc
{
public:
    IFunc();
    virtual void display()=0;
};

extern "C" __declspec(dllexport) std::shared_ptr<IFunc> funcInit(void);
typedef std::shared_ptr<IFunc> (*IFuncP)(void);

#endif // IFUNC_H
