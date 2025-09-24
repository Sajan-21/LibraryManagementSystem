#include<stdio.h>

struct Books{
    int _id;
    char title[200];
    char author[200];
    int availability;
};

void addBook();

int main() {

    int selection;

    printf("\nhi, how may i help you ?\nPlease select the option that you want.");
    printf("\nEnter 1 for Add Books.\nEnter 2 for List books.\nEnter 3 for Search book.\nEnter 4 for Delete book\nEnter 0 to exit\n");
    scanf("%d", &selection);

    switch(selection) {
        case 0:
            printf("exiting from LIBRARY MANAGEMENT SYSTEM");
            break;
        case 1:
            printf("You have selected Add Books");
            addBook();
            break;
        case 2:
            printf("You have selected List books");
            break;
        case 3:
            printf("You have selected List books");
            break;
        default:
            printf("You have entered wrong number,\nplease read the instruction and enter carefully.");
            break;
    }

    return 0;
}

void addBook() {
    
    struct Books book;
    
    getchar();

    printf("\nplease enter the title of the book\n");
    fgets(book.title, sizeof(book.title), stdin);

    printf("\nplease enter the author's name\n");
    fgets(book.author, sizeof(book.author), stdin);

    printf("\nplease enter the stock count\n");
    scanf("%d", &book.availability);

    printf("Title: %s", book.title);
    printf("Author: %s", book.author);
    printf("Stock: %d\n", book.availability);
}