// i will start with a bouble implementation
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void sorter(int size /*needs to be computer so 0..n*/ /*, int max*/, int arr[])
{
    int temp;
    for (int j = 0; j < (size - 1); j++)
    {
        for (int i = 0; i < size - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
};

int main()
{
    int arr[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 101;
    }

    // printing the original array
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", arr[i]);
    }
    sorter(99 /*bit wise*/, /* 2,*/ arr);

    printf("\n\n");

    // print the result
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}