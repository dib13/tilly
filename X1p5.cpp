#include <iostream>
int main(){
    int x = 0, y = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> x >> y;
    std::cout << "The product of the two numbers is: ";
    std::cout << (x*y) << std::endl;
    return 0;
}