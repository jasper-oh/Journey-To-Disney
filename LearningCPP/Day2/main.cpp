#include <iostream>

/*
 * Different types of stream
 *
 * 0. std::cout -> Printing data to the console (terminal)
 * 1. std::cin -> Reading data from the terminal
 * 2. std::cerr -> Printing errors to the console
 * 3. std::clog -> printing log messages to the console
 * 4. std::endl -> why didn't he mention about it?
 *
 * Printed sequences are change first, log message appear and then err message appear.
 */

void use_differnet_stream(){
    std::cout << "Hello World!" << std::endl;
    std::cerr << "std::cerr output : Something went wrong" << std::endl;
    std::clog << "std::clog output : This is a log message" << std::endl;

}

void input_output(){

}

int main() {
//    std::cout << "Hello, World!" << std::endl;

    use_differnet_stream();
    return 0;
}
