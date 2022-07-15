#include"book.h"
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using std::string;

class Shop {
    private:
        Book book[20];
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
            if (file.fail()){
                std::cout<< "Error opening file" << std::endl;
                return;
            }
            string line;
            int bookCount = 0;
            while(getline(file,line)){
                if(bookCount == 0){
                    bookCount ++;
                    continue;
                }
               /*  
                Book * book = new Book[bookCount];
               */                       
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