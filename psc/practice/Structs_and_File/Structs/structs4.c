#include <stdio.h>

struct Books {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Books book1 = {"C Programming", "Dennis Ritchie", 500.0};

    struct Books *ptr = &book1;

    printf("Title: %s\n", ptr->title);
    printf("Author: %s\n", ptr->author);
    printf("Price: %.2lf\n\n", ptr->price);

    ptr->price += 100;

    printf("Updated struct: \n\n");

    printf("Title: %s\n", ptr->title);
    printf("Author: %s\n", ptr->author);
    printf("Price: %.2lf\n", ptr->price);

    return 0;
}