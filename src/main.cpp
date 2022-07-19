#include<iostream>
#include<string>
#include"booksDB.h"
using std::string;

class Terminal {
    public:
        void Clear() {

        }
};

int main() {
    BooksDB db = BooksDB("./database.txt");
    return 0; 
}