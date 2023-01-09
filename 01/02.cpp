#include <iostream>

int main()
{
    int i{11};
    std::strong_ordering result { i <=> 20 };
    if (result == std::strong_ordering::less)  { std::cout << "11 less than 20;" << std::endl; }

    double a{ 2.3 };
    std::partial_ordering are { a <=> 3 };
    if (are == std::partial_ordering::less) { std::cout << "2.3 less than 3;" << std::endl;}
    return 0;
}