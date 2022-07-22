#include<sys/ioctl.h>
#include<unistd.h>

#include<iostream>
#include<string>
#include<array>

#include"booksDB.h"
#include"book.h"
using std::string;

class Terminal {
    private:
        struct winsize w;
        void line_with_edges(){
            for(int i = 0;i < w.ws_col;i++){
                if(i == 0){
                    std::cout << "+";
                }
                else if(i < w.ws_col -1){
                    std::cout << "-";
                }else{
                    std::cout << "+" << std::endl;
                }
            }
        }
    public:
        Terminal(){
            //Get terminal size
            ioctl(STDOUT_FILENO,TIOCGWINSZ, &w);
        }
        void Clear() {
            system("clear");
        }
        void Welcome(){
            line_with_edges();
            for(int i = 0; i < w.ws_col;i++){
                if(i == (w.ws_col / 2) - 4){
                    std::cout << "WELCOME" << std::endl;
                    break;
                } else {
                    std::cout << " ";
                }  
            }
            line_with_edges();
        }
        void PrintBooks(BooksDB db){
           Book * books = db.GetBooks("");
           //hmm
        }
};
Terminal terminal = Terminal();

int main() {
    terminal.Clear();
    terminal.Welcome();
    BooksDB db = BooksDB("./database.txt");
    Book book = Book("Book 1","Author 1",1990, 100, 20, "1");
    terminal.PrintBooks(db);
    return 0; 
}