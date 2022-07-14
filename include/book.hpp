#include <string>
using std::string;
class Book {
    private:
        string Name;
        string Author;
        int PublicationDate;
        int Stock;
        int Sales;
    
    public:
        Book(string name,string author,int publicationData,int stock, int sales);
        void GetBookData ();
        void AddNewStock(int newStock);
        void RemoveStock(int quantity = 1);
        void SetStock(int stock);
        void Sell(int quantity = 1);
        void SetSales(int sales);
};