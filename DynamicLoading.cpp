#include "DynamicLoading.h"
#include "IFunc.h"
#include <iostream>

typedef int (*TAddProc)(int X, int Y);
DynamicLoading::DynamicLoading()
{

}

DynamicLoading::~DynamicLoading()
{
    if(_lib != nullptr)
    {
        FreeLibrary(_lib);
    }
}

void DynamicLoading::loadLibrary()
{
    _lib = LoadLibrary("libFunc1.dll");
    if(_lib == NULL)
    {
        std::cout << "Couldn't find libFunc1.dll" << std::endl;
        return;
    }
    std::cout << "Loaded libFunc1.dll" << std::endl;
}

void DynamicLoading::getProcAddress_Add()
{
    FARPROC proc = GetProcAddress(_lib, "Add");
    if(proc == NULL)
    {
        std::cout << "Coundn't get proc address" << std::endl;
        return;
    }
    std::cout << "Got proc address for Add function." << std::endl;

    TAddProc add = reinterpret_cast<TAddProc>(proc);
    std::cout << add(1,2) << std::endl;
}

void DynamicLoading::getProcAddress_Func()
{
    FARPROC proc = GetProcAddress(_lib, "funcInit");
    if(proc == nullptr)
    {
        std::cout << "Coundn't get proc address" << std::endl;
        return;
    }
    std::cout << "Got proc address for funcInit function." << std::endl;

    std::shared_ptr<IFunc> p;
    IFuncP funcInit = reinterpret_cast<IFuncP>(proc);
    p = funcInit();
    p->display();
}
