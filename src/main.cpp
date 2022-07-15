#include"book.h"
#include<iostream>
#include<fstream>
#include<string>

using std::string;

class Shop {
    private:
        Book book[1];
        string Name;
        string BooksDataLocation;
    public:
        Shop(string name, string booksDataLocation){
            Name = name;
            BooksDataLocation = booksDataLocation;
        }
        void GetBooksData(){
            std::ifstream file;
            file.open(BooksDataLocation.c_str());
            if (file.fail())
                std::cout<< "Error opening file" << std::endl;
                return;

            string line;
            int bookCount;
            while(getline(file,line)){
                std::cout << line << std::endl;
                bookCount++;
            }
            file.close();
            
            
        }
        void ShowAllBooks(){

        }
};


int main() {
    std::cout << "Bookshop Management System" << std::endl << std::endl;
    Shop shop = Shop("TheBookStore","./data.txt");
    shop.GetBooksData();
    return 0;
}