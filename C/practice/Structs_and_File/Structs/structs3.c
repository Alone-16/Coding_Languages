#include <stdio.h>
#include <string.h>

struct Book {
    char title[200];
    char author[100];
    float price;
};

int main() {
    // 2 categories, each with 3 books
    struct Book books[3][3] = {
        {   // Fiction
            {"The Alchemist", "Paulo Coelho", 299.9},
            {"Harry Potter", "J.K. Rowling", 499.5},
            {"Lord of Rings", "J.R.R. Tolkien", 699.0}
        },
        {   // Non-Fiction
            {"Sapiens", "Yuval Harari", 599.5},
            {"Atomic Habits", "James Clear", 399.9},
            {"Educated", "Tara Westover", 449.0}
        },
        {
            // Comics
            {"prince", "nadeem", 0.0},
            {"Superman", "RDJ", 100.0},
            {"Batman", "Peter Parker", 149.9}
        }
    };

    char *categories[3] = {"Fiction", "Non-Fiction", "Comics"};

    // Nested loop to print
    for (int i = 0; i < 3; i++) {
        printf("\nCategory: %s\n", categories[i]);
        for (int j = 0; j < 3; j++) {
            printf("Title: %s, Author: %s, Price: %.2f\n",
                   books[i][j].title, books[i][j].author, books[i][j].price);
        }
    }

    return 0;
}
