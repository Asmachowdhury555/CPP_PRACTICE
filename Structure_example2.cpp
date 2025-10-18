#include <iostream>
#include <string>

using namespace std;

// Defining a Structure named 'Book'
struct Book {
    string title;
    string author;
    int year;
    float price;
};

// Function to display the structure data
void displayBook(Book b) {
    cout << "Book Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Publication Year: " << b.year << endl;
    cout << "Price: BDT " << b.price << endl;
}

int main() {
    // Creating a variable (instance) of the Book structure
    Book book1; 
    
    // Assigning values to the structure members
    book1.title = "C++ Programming Fundamentals";
    book1.author = "Niloy Ahsan";
    book1.year = 2024;
    book1.price = 550.00;
    
    cout << "--- Book Information ---" << endl;
    displayBook(book1);
    
    return 0;
}
