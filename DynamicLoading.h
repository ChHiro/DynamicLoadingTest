#ifndef DYNAMICLOADING_H
#define DYNAMICLOADING_H
#include <windows.h>

class DynamicLoading
{
public:
    DynamicLoading();
    ~DynamicLoading();
    void loadLibrary();
    void getProcAddress_Add();
    void getProcAddress_Func();
private:
    HMODULE _lib;
};

#endif // DYNAMICLOADING_H
