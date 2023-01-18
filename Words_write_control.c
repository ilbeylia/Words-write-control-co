#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define WORDS 5
#define WORD_LENGTH 20

const char *words[] = {
    "hello",
    "world",
    "programming",
    "language",
    "computer"
};

int main() {
    srand(time(0));

    for (int i = 0; i < WORDS; i++) {
        int randomIndex = rand() % WORDS;
        printf("Type the word: %s\n", words[randomIndex]);

        char input[WORD_LENGTH];
        scanf("%s", input);

        if (strcmp(input, words[randomIndex]) == 0) {
            printf("Correct!\n");
        } else {
            printf("Incorrect. The correct word is %s\n", words[randomIndex]);
        }
    }

    return 0;
}