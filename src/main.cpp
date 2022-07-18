#include<iostream>
#include<string>
using std::string;

class Terminal {
    public:
        void Clear() {

        }
};

int main() {
    std::cout << "Book management system" << std::endl;
    std::cout << "MENU" << std::endl;
    std::cout << "1: SHOW ALL BOOKS"<< std::endl;
    std::cout << "2: FIND BOOK"<< std::endl;
    std::cout << "3: SELL BOOK" << std::endl;
    std::cout << "0: DELETE BOOK" << std::endl;
    return 0; 
}