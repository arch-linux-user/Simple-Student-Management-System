#include "Functions.hpp"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <map>

int main() {
    std::map<int,std::string> list;
    int choice;

    while (true) {
        std::cout << "Welcome in S.M.S" << std::endl;
        std::cout << "1.Add Student" << std::endl;
        std::cout << "2.Remove Student" << std::endl;
        std::cout << "3.Display Students" << std::endl;
        std::cout << "4.Exit" << std::endl;
        std::cout << "Enter your choice > " << std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1:
                AddStudent(list);
                break;
            case 2:
                RemoveStudent(list);
                break;
            case 3:
                DisplayStudents(list);
                break;
            case 4:
                std::cout << "Quiting..." << std::endl;
                return 0;
                break;

        }





        
    }



    return 0;
}
