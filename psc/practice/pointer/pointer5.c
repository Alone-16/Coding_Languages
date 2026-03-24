#include <stdio.h>
#include <string.h>

//Written by chatgpt for seeing how pointer with recursion works

#define MAXLINE 1000
#define MAXWORDS 200

/* reverse characters between l and r (inclusive) */
void rev_str(char *l, char *r) {
    if (l >= r) return;
    char t = *l; *l = *r; *r = t;
    rev_str(l + 1, r - 1);
}

/* reverse array of char* between left and right indices */
void rev_arr(char **a, int left, int right) {
    if (left >= right) return;
    char *t = a[left]; a[left] = a[right]; a[right] = t;
    rev_arr(a, left + 1, right - 1);
}

int main(void) {
    char line[MAXLINE];
    char *words[MAXWORDS];
    int count = 0;

    printf("Enter a sentence: ");
    if (!fgets(line, sizeof line, stdin)) return 0;
    line[strcspn(line, "\n")] = '\0';

    /* tokenize the line into words (space/tab separated) */
    char *tok = strtok(line, " \t");
    while (tok && count < MAXWORDS) {
        words[count++] = tok;
        tok = strtok(NULL, " \t");
    }

    /* reverse each word in-place using recursion */
    for (int i = 0; i < count; ++i) {
        char *l = words[i];
        char *r = l + strlen(l) - 1;
        rev_str(l, r);
    }

    /* reverse order of words (swap pointers) using recursion */
    if (count > 0) rev_arr(words, 0, count - 1);

    /* print final result */
    for (int i = 0; i < count; ++i) {
        if (i) putchar(' ');
        fputs(words[i], stdout);
    }
    putchar('\n');
    return 0;
}
