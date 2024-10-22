#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *arr, int N)
{
    for (int step = 0; step < N - 1; ++step)
    {
        for (int i = 0; i < N - step - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        if (swap == 0)
        {
            break;
        }
    }
}

void print_arr(int *arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 4, 3, 7, 6};
    int N = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, N);

    print_arr(arr, N);

    return 0;
}
