#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 61
#define CHARSET "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

int main(void) {
    char password[PASSWORD_LEN + 1];
    int i;

    srand(time(NULL)); // seed the random number generator

    for (i = 0; i < PASSWORD_LEN; i++) {
        int index = rand() % (sizeof(CHARSET) - 1); // get a random index into the CHARSET
        password[i] = CHARSET[index];
    }

    password[i] = '\0'; // add null terminator to end of string

    printf("%s\n", password);

    return 0;
}
