# Library Management System

## Description
This project implements a simple Library Management System in C++. It allows users to manage a library's book inventory, perform operations such as adding books, searching for books by title, checking books in and out, and displaying the current inventory status.

## Features
- Add new books to the library.
- Search for books by title.
- Check out books (mark as borrowed).
- Check in books (mark as returned).
- Display the current list of books in the library.

## Getting Started
To run this project locally, follow these steps:

### Prerequisites
Ensure you have a C++ compiler installed. We recommend using MinGW on Windows.

### Installation
Clone the repository and compile the project:

```bash
git clone https://github.com/your-username/library-management-system.git
cd library-management-system
g++ main.cpp Book.cpp Library.cpp -o main.exe
