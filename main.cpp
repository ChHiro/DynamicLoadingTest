#include <iostream>
#include "DynamicLoading.h"

using namespace std;

int main()
{
    DynamicLoading dl;
    dl.loadLibrary();
    dl.getProcAddress_Add();
    dl.getProcAddress_Func();
    return 0;
}
