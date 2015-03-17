#include <iostream>

int main(int argc, char const *argv[])
{
    while (true) {
        std::cout << "\a"; // it would never stop unless you press Ctrl - C.
    }

    return 0;
}