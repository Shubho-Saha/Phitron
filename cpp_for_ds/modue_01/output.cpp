#include <iostream>

int main()
{
    std::cout << "Hello There!" << "\n";
    int a = 10;
    long long int b = 1234567890123;
    float c = 5.67;
    double d = 12.45678901234;
    char s = 'M';

    std::cout << "My integer a: " << a << "\n"
              << "long long int b: " << b << std::endl
              << "floact c: " << c << std::endl
              << "double d: " << d << std::endl
              << "char s: " << s;

    return 0;
}