#include "badman.cpp"
#include <iostream>

#define data 0.2

int main()
{
    float aff = affine(data, -10, 10, 0, 1023);
    std::cout << aff << std::endl;

    float pyth = pythagore(1,1);
    std::cout << pyth << std::endl;

    float alka = alkashi(150,40,2.4);
    std::cout << alka << std::endl;

    
    return 0;
}