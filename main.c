#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct myStructure
{
    int myNum;
    char myLetter[5];
};

int main()
{
    srand(time(NULL)); // seed with current time
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    // create a structure with the name "s1"
    struct myStructure s1;
    s1.myNum = 2;
    for (int i = 0; i < 4; i++)
    {
        s1.myLetter[i] = alphabet[rand() % 26];
    }

    s1.myLetter[4] = '\0';
    printf("%d\n", s1.myNum);
    printf("%s\n", s1.myLetter);
    return 0;
}