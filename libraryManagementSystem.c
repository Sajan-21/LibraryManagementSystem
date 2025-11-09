#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Books{
    char title[200];
    char author[200];
    int availability;
};

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
            break;
        case 2:
            printf("You have selected List books\n");
            break;
        case 3:
            printf("You have selected search book");
            break;
        case 4:
            printf("You have selected delete book");
            break;
        default:
            printf("You have entered wrong number,\nplease read the instruction and enter carefully.");
            break;
    }

    return 0;
}