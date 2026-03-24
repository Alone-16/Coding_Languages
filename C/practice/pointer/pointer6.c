#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 1000
#define MAXLINE 200

void rev_str(char *l, char *r){
    if(l >= r) return;
    char t = *l;
    *l = *r;
    *r = t;
    rev_str(l + 1, r - 1);
};

void rev_arr(char **a, int left, int right){
    if (left >= right) return;
    char *t = a[left]; a[left] = a[right]; a[right] = t;
    rev_arr(a, left + 1, right - 1);
};

void alpha(char *line, int length) {
    char *src = line, *dst = line;
    for (int i = 0; i < length; i++) {
        if (isalpha(src[i]) || isspace(src[i])) {
            *dst++ = tolower(src[i]);
        }
    }
    *dst = '\0';
}

int main() {
    char line[MAXLINE];
    char *word[MAXWORD];
    int count = 0;

    printf("Enter a sentence: ");
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';

    //removing non-alphabetic char
    alpha(line, strlen(line));

    //Tokenising
    char *tok = strtok(line, " \t");
    while(tok && count < MAXWORD){
        word[count++] = tok;
        tok = strtok(NULL, " \t");
    }

    //reversing word
    for(int i = 0; i < count; i++){
        char *l = word[i];
        char *r = l + strlen(l) - 1;
        rev_str(l, r);
    }

    //reversing order 
    if(count > 0){
        rev_arr(word, 0, count - 1);
    }

    //printing 
    for (int i = 0; i < count; ++i) {
        if (i) putchar(' ');
        fputs(word[i], stdout);
    }
    putchar('\n');

    return 0;
}