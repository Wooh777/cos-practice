#include <iostream>

int main(int argc, char *argv[])
{
    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;
    if (x >= 0){
        std::cout << "You entered a positive integer!" << std::endl;
        return 0;
    } else {
        std::cout << "You entered a negative itegar!" << std::endl;
    }
}