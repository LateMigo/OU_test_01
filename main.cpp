#include <iostream>

int Policz (int a, int b)
{
    return a * b;
}
int main() {
    std::cout << "Hello and welcome to \n";
    std::cout << "W pierwszym branchu; 2 + 3= " << Policz(2,3) << "!\n";
    return 0;
}