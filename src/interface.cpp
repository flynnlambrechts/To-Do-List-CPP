#include <iostream>

#include "Task.hpp"

void run() {
    std::cout << "Hello World!" << std::endl;
    Task t = Task();
    std::cout << t.getName() << std::endl;
}

int main() {
    run();
    return 0;
}