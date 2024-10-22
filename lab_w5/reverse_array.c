#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// reverse array function
void reverse_array(int *arr, int N)
{
    for (int i = 0; i < N/2; i++)
    {
        swap(&arr[i], &arr[N - 1 - i]);
    }
}

int main()
{
    int arr[] = {1, 4, 3, 7, 6};
    int N = sizeof(arr)/sizeof(arr[0]);
    reverse_array(arr, N);

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0; // set break point
}
