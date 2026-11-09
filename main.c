// i will start with a bouble implementation
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void bubblesort(int size, int arr[])
{
    int temp;
    bool swapped;
    for (int j = 0; j < (size - 1); j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
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
    bubblesort(100, arr);

    printf("\n\n");

    // print the result
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}