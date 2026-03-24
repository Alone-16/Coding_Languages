#include <stdio.h>

struct book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct book b[3] = {
        {"hello", "alone", 399.9},
        {"hi", "solitude", 499.9},
        {"umm", "lone", 449.9}
    };

    for(int i = 0; i < 3; i++){
        printf("Title: %s, Author: %s, Price: %.2f\n", b[i].title, b[i].author, b[i].price);
    }

    return 0;
}