#include<iostream>
#include<string.h>

using std::string;

class Book {
    private:
        string Name;
        string Author;
        int PublicationDate;
        int Stock;
        int Sales;
    
    public:
        Book(string name,string author,int publicationData,int stock, int sales) {
            Name = name;
            Author = author;
            Stock = stock;
            Sales = sales;
        }
        void GetBookData () {
            std::cout << Name << " - " << Author << std::endl;
            std::cout << "Stock: " << Stock << std::endl;
        }
        
        void AddNewStock(int newStock) {
            Stock += newStock;
        }
        void RemoveStock(int quantity = 1) {
            Stock -= quantity;
        }
        void SetStock(int stock) {
            Stock = stock;
        }
        
        void Sell(int quantity = 1) {
            Sales += quantity;
            RemoveStock(quantity);
        }
        void SetSales(int sales) {
            Sales = sales;
        }
};