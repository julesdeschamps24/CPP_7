#include "whatever.hpp"

int main()
{
    int a = 1;
    int b = 2;

    std::cout << "a = " << a << " | b = " << b << "\nswap" << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << " | b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::string str_a = "aaaaaaaaaa";
    std::string str_b = "bbbbbbbbbb";

    std::cout << "\nstr_a = " << str_a << " | str_b = " << str_b << "\nswap" << std::endl;
    ::swap(str_a, str_b);
    std::cout << "str_a = " << str_a << " | str_b = " << str_b << std::endl;
    std::cout << "min(str_a, str_b) = " << ::min(str_a, str_b) << std::endl;
    std::cout << "max(str_a, str_b) = " << ::max(str_a, str_b) << std::endl;

}