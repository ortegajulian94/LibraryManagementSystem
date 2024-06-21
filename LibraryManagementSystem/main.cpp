// main.cpp
#include <iostream>
#include "Book.h"
#include "Library.h"

int main() {
    Library library;

    Book book1("The Catcher in the Rye", "J.D. Salinger");
    Book book2("To Kill a Mockingbird", "Harper Lee");
    Book book3("1984", "George Orwell");

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    library.displayBooks();

    std::cout << "Checking out '1984'...\n";
    library.checkOutBook("1984");

    std::cout << "Books after checkout:\n";
    library.displayBooks();

    std::cout << "Checking in '1984'...\n";
    library.checkInBook("1984");

    std::cout << "Books after check-in:\n";
    library.displayBooks();

    return 0;
}
