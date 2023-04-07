#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Define the structure for a book
typedef struct {
    char title[50];
    char author[50];
    int year;
} Book;

// Define the global array of books
Book library[MAX_BOOKS];
int num_books = 0;

// Function to add a book to the library
void add_book() {
    if (num_books == MAX_BOOKS) {
        printf("Library is full, cannot add more books.\n");
        return;
    }

    Book new_book;
    printf("Enter book title: ");
    scanf("%s", new_book.title);
    printf("Enter book author: ");
    scanf("%s", new_book.author);
    printf("Enter publication year: ");
    scanf("%d", &new_book.year);

    library[num_books++] = new_book;
    printf("Book added successfully.\n");
}

// Function to display the details of a book
void display_book(Book book) {
    printf("%s by %s (%d)\n", book.title, book.author, book.year);
}

// Function to display the details of all books in the library
void display_all_books() {
    if (num_books == 0) {
        printf("Library is empty.\n");
        return;
    }

    printf("List of all books:\n");
    for (int i = 0; i < num_books; i++) {
        display_book(library[i]);
    }
}

// Function to list all books by a given author
void list_books_by_author() {
    char author[50];
    printf("Enter author name: ");
    scanf("%s", author);

    int count = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(library[i].author, author) == 0) {
            display_book(library[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("No books found for author %s\n", author);
    } else {
        printf("%d books found for author %s\n", count, author);
    }
}

// Function to list the count of books in the library
void list_book_count() {
    printf("Total number of books in the library: %d\n", num_books);
}

// Main function that displays the menu and calls the appropriate functions
int main() {
    int choice;

    do {
        printf("\nLibrary Menu:\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_all_books();
                break;
            case 3:
                list_books_by_author();
                break;
            case 4:
                list_book_count();
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 5);

    return 0;
}