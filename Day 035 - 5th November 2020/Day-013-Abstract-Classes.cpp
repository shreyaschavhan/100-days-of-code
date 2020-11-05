#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};
class MyBook : public Book{
    int price;
public:
    MyBook();
    MyBook(string t, string a, int p) : Book(t, a){
        title = t;
        author = a;
        price = p;
    }
    void display(){
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
    }
};

// Write your MyBook class here

    //   Class Constructor
    //
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here


    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here

// End class

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
