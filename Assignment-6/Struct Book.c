#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book b;

    printf("Enter Book Title: ");
    scanf("%s", b.title);

    printf("Enter Book Author: ");
    scanf("%s", b.author);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    printf("\nBook Details\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}