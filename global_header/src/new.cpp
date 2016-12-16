#include "new.h"

int g_test;

New::New()
{
    //ctor
    g_test = 5;
    std::cout << "Hello world!"<< TESTTHREAD <<"g_test "<<g_test << std::endl;
}

New::~New()
{
    //dtor
}
