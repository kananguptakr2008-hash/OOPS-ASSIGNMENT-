#include <iostream>
using namespace std;
class books
{
public:
    string title;
    string author;
    int price;
    int pages;
    // Default Constructor
    books()
    {
        title = "Unknown";
        author = "Unknown";
        price = 0;
        pages = 0;
    }
    // Parameterized Constructor
    books(string t, string a, int p, int pg)
    {
        title = t;
        author = a;
        price = p;
        pages = pg;
    }
    // Function to display book details
    void display()
    {
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price : " << price << endl;
        cout << "Pages : " << pages << endl;
        cout << "-----------------------" << endl;
    }
};
int main()
{
    // Object using Default Constructor
    books b1;
    // Object using Parameterized Constructor
    books b2("Wings of Fire", "A.P.J. Abdul Kalam", 500, 300);
    cout << "Book 1 (Default Constructor):" << endl;
    b1.display();
    cout << "Book 2 (Parameterized Constructor):" << endl;
    b2.display();
    return 0;
}
