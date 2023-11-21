/*
name:Muhammad Abbas
ID:23k-0068
Description: A library database menu with a lot of funcionalites
date:21/11/23
*/


#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100 //max books the library can hold shown as a constant

// Structure to represent book information
struct Book {
    int accessionNumber;
    char author[50];
    char title[100];
    int isIssued; // 0 for not issued, 1 for issued
};

// Function prototyping
void displayBookInformation(struct Book books[], int count);
void addNewBook(struct Book books[], int *count);
void displayBooksByAuthor(struct Book books[], int count);
void displayBookCountByTitle(struct Book books[], int count);
void displayTotalBookCount(int count);
void issueBook(struct Book books[], int count);

int main() {
    struct Book books[MAX_BOOKS];
    int bookCount = 0;
    int choice;

    do {
        // Display menu
        printf("\nLibrary Menu\n");
        printf("1 - Display book information\n");
        printf("2 - Add a new book\n");
        printf("3 - Display all the books of a particular author\n");
        printf("4 - Display the number of books of a particular title\n");
        printf("5 - Display the total number of books in the library\n");
        printf("6 - Issue a book\n");
        printf("0 - Exit\n");

        // Get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform actions based on user choice
        switch (choice) {
            case 1:
                displayBookInformation(books, bookCount);
                break;
            case 2:
                addNewBook(books, &bookCount);
                break;
            case 3:
                displayBooksByAuthor(books, bookCount);
                break;
            case 4:
                displayBookCountByTitle(books, bookCount);
                break;
            case 5:
                displayTotalBookCount(bookCount);
                break;
            case 6:
                issueBook(books, bookCount);
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

// Function to display book information
void displayBookInformation(struct Book books[], int count) {
    int i;
    printf("\nBook Information:\n");
    for (i = 0; i < count; i++) {
        printf("Accession Number: %d\n", books[i].accessionNumber);
        printf("Author: %s\n", books[i].author);
        printf("Title: %s\n", books[i].title);
        printf("Issued: %s\n", books[i].isIssued ? "Yes" : "No"/*ternary operator used*/);
        printf("------------------------\n");
    }
}

// Function to add a new book
void addNewBook(struct Book books[], int *count/*this is a pointer to integer pointing to the current num of books in library*/) {
    if (*count < MAX_BOOKS) { //this is checking if there is space in the library
        struct Book newBook; //initializing a structure of type book for adding new book details
        printf("\nEnter book details:\n");
        printf("Accession Number: ");
        scanf("%d", &newBook.accessionNumber);
        printf("Author: ");
        scanf("%s", newBook.author); // assuming author names don't contain spaces
        printf("Title: ");
        scanf("%s", newBook.title); // assuming titles don't contain spaces
        newBook.isIssued = 0; // initialize as not issued
        
        books[*count] = newBook;//this is alloting the new book details to the next free space in the books array
        (*count)++;//using pointer arithmetic to increment the number of books in the llibrary
        printf("Book added successfully.\n");
    } else {
        printf("Library is full. Cannot add more books.\n");
    }
}

// Function to display books by a particular author
void displayBooksByAuthor(struct Book books[], int count) {
    int i;
    char searchAuthor[50];
    printf("\nEnter the author's name: ");
    scanf("%s", &searchAuthor);

    printf("\nBooks by Author %s:\n", searchAuthor);
    for (i = 0; i < count; i++) {
    	//using strcmp()to see if both names of authors are equal
        if (strcmp(books[i].author, searchAuthor) == 0) {
            printf("Accession Number: %d\n", books[i].accessionNumber);
            printf("Title: %s\n", books[i].title);
            printf("------------------------\n");
        }
    }
}

// Function to display the number of books of a particular title
void displayBookCountByTitle(struct Book books[], int count) {
    char searchTitle[100];
    int titleCount = 0, i;

    printf("\nEnter the title: ");
    scanf("%s", &searchTitle);

    for (i = 0; i < count; i++) {
    	//string function to check equality of 2 strings
        if (strcmp(books[i].title, searchTitle) == 0) {
            titleCount++;
        }
    }

    printf("Number of books with title \"%s\": %d\n", searchTitle, titleCount);
}

// Function to display the total number of books
void displayTotalBookCount(int count) {
    printf("\nTotal number of books in the library: %d\n", count);
}

// Function to issue a book
void issueBook(struct Book books[], int count) {
    int accessionNumber, i;
    printf("\nEnter the accession number of the book to issue: ");
    scanf("%d", &accessionNumber);

    for (i = 0; i < count; i++) {
        if (books[i].accessionNumber == accessionNumber) {
            if (books[i].isIssued == 0) {
                books[i].isIssued = 1; // Mark the book as issued
                printf("Book issued successfully.\n");
            } else {
                printf("This book is already issued.\n");
            }
            return; // Exit the function after issuing the book
        }
    }


}
