#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 61
#define CHARSET "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

int main(void)
{
    srand(time(NULL));

    char password[PASSWORD_LEN + 1] = {0};
    for (int i = 0; i < PASSWORD_LEN; i++)
    {
        int index = rand() % (sizeof(CHARSET) - 1);
	password[i] = CHARSET[index];
    }

    printf("%s\n", password);

    return 0;
}
