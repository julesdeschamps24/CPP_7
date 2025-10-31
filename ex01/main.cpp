#include "iter.hpp"

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    ::iter(a, 5, print_elem<int>);
    std::cout << std::endl;
    ::iter(a, 5 , incr_elem<int>);
    ::iter(a, 5, print_elem<int>);
    std::cout << std::endl;

    float f[] = {1.5, 2.1, -2.8, 4.6, 1.5};

    std::cout << std::endl;
    ::iter(f, 5, print_elem<float>);
    ::iter(f, 5, incr_elem<float>);
    std::cout << std::endl;
    ::iter(f, 5, print_elem<float>);
    std::cout << std::endl;

    std::string a_str[] = {"Jules", "Jules jr", "Jules jr jr", "Jules Jules", "Jules Jules jr"};

    std::cout << std::endl;
    ::iter(a_str, 5, print_elem<std::string>);
    std::cout << std::endl;
}