#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{

    int arr[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 101;
    }
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}