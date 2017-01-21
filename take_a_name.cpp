#include <iostream>
#include <string>

int main()
{
    // Ask for the person's name
    std::cout << "Please enter your first name:";

    // Read the name
    std::string name; // Define name
    std::cin >> name; // read into

    // write a greeting
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
