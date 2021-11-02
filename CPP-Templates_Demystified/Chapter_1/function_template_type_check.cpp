#include <iostream>
template<typename T>
T foo(T x, T y)
{
    return x + y;
}
int main()
{
    std::cout << foo(10, 20) << std::endl;
    std::cout << foo(10.2, 20.3) << std::endl;
    std::cout << foo(10, 'A') << std::endl;
    return 0;
}

