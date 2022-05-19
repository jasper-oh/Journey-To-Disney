#include <iostream>

/*
 * Different types of stream
 *
 * 0. std::cout -> Printing data to the console (terminal)
 * 1. std::cin -> Reading data from the terminal
 * 2. std::cerr -> Printing errors to the console the data flow operator is >>
 * 3. std::clog -> printing log messages to the console
 * 4. std::endl -> why didn't he mention about it?
 *
 * Printed sequences are change first, log message appear and then err message appear.
 */

void use_different_stream(){
    std::cout << "Hello World!" << std::endl;
    std::cerr << "std::cerr output : Something went wrong" << std::endl;
    std::clog << "std::clog output : This is a log message" << std::endl;
}


void input_output(){
    int age;
    std::string name;

    std::cout << "Please type in your Last Name : " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age : " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << "! you are " << age << " years old" << std::endl;
}

void input_output_2(){
    int age;
    std::string name;
    std::cout << "Please type in your Last name and age, seperated by spaces : " << std::endl;
    std::cin >> name >> age ; //input name and age
    std::cout << "Hello " << name << "! you are " << age << " years old" << std::endl;
}

void input_output_3(){
    int age;
    std::string full_name;
    std::cout << "Please type in your full name : " << std::endl;
    std::getline(std::cin,full_name);

    std::cout << "Type in your age : " << std::endl;
    std::cin >> age;
    std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;

//    use_different_stream();
    input_output();
    input_output_2();
    input_output_3();
    return 0;

}
