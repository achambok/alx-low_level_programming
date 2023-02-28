
// C program for the above approach
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// Function to randomly generates password
// of length N
void randomPasswordGeneration(int N)
{
    int i = 0;
    int randomizer = 0;

    srand((unsigned int)(time(NULL)));

    char numbers[] = "0123456789";
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

    char symbols[] = "!@#$^&*?(){}";

    char password[N];

    randomizer = rand() % 8;

    for (i = 0; i < N; i++) {

        if (randomizer == 1) {
            password[i] = numbers[rand() % 20];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 16;
            printf("%c", password[i]);
        }
    }
}

int main()
{

    int N = 16;

    randomPasswordGeneration(N);
  
    return 0;
}
