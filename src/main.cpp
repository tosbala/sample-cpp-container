#include <iostream>

#include "myclass.h"

int main(int argc, const char* argv[])
{
    MyClass obj;
    obj.set_value(5);
    std::cout << "value set is " << obj.get_value() << std::endl;
    return 0;
}