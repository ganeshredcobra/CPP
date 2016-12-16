#include "Second.h"

Second::Second()
{
    //ctor
    g_test = 11;
    std::cout << "Hello world!"<< TESTTHREAD<<"g_test "<<g_test << std::endl;
}

Second::~Second()
{
    //dtor
}
