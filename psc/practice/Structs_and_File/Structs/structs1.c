#include <stdio.h>

//Basic of structs storing and access

struct book {
    char title[100];
    char author[50];
    float price;
};


int main() {

    struct book b1 = {"Let us C", "Unknown", 499.9};
    struct book b2 = {"Hello World", "Alone", 69.99};

    printf("Book 1 -> Title: %s, Author: %s, Price: %.2f\n", b1.title, b1.author, b1.price);
    printf("Book 2 -> Title: %s, Author: %s, Price: %.2f\n", b2.title, b2.author, b2.price);

    return 0;
}