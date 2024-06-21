// Book.cpp
#include "Book.h"

Book::Book(std::string title, std::string author)
    : title(title), author(author), checkedOut(false) {}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

bool Book::isCheckedOut() const {
    return checkedOut;
}

void Book::checkOut() {
    checkedOut = true;
}

void Book::checkIn() {
    checkedOut = false;
}
