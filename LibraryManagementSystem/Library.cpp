// Library.cpp
#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::displayBooks() const {
    for (const auto& book : books) {
        std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor();
        if (book.isCheckedOut()) {
            std::cout << " (Checked Out)";
        } else {
            std::cout << " (Available)";
        }
        std::cout << std::endl;
    }
}

Book* Library::findBookByTitle(const std::string& title) {
    for (auto& book : books) {
        if (book.getTitle() == title) {
            return &book;
        }
    }
    return nullptr;
}

bool Library::checkOutBook(const std::string& title) {
    Book* book = findBookByTitle(title);
    if (book && !book->isCheckedOut()) {
        book->checkOut();
        return true;
    }
    return false;
}

bool Library::checkInBook(const std::string& title) {
    Book* book = findBookByTitle(title);
    if (book && book->isCheckedOut()) {
        book->checkIn();
        return true;
    }
    return false;
}
