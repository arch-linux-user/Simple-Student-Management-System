#include "Functions.hpp"
#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
#include <fstream>


void AddStudent(std::map<int,std::string>& list) {
    int number;
    std::string name;
    std::cout << " " << std::endl;
    std::cout << "Enter a number and a name of the Student  > " << std::endl;
    std::cin >> number >> name ;
    std::cout << " " << std::endl;
    list.insert({number,name});
}
void RemoveStudent(std::map<int,std::string>& list) {
    int number1;
    std::cout << " " << std::endl;
    std::cout << "Enter a number of the student what you wanna erase > " << std::endl;
    std::cin >> number1;
    std::cout << " " << std::endl;
    list.erase(number1);

}
void DisplayStudents(std::map<int,std::string>& list ) {
    for (auto it = list.begin(); it != list.end(); ++it ) {
        std::cout << it->first << ":" << it->second << std::endl;

    }
}
