#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void bubbleSortOptimised(int *arr, int n)
{
    bool swapped = true;
    for(int i = 0; i < n-1 && swapped; i++)
    {
        for(int j = 0, swapped = false; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swapped = true;
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}



int main()
{
    int n;
    //cout << "Size of array : "; commented this for testcase
    cin >> n;

    int * array = new int[n];

    for(int i = 0; i < n; i++)
        cin >> array[i];

    bubbleSort(array, n);
    //bubbleSortOptimised(array, n); uncomment to run this
    cout << "Sorted array\n";
    for(int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << "\n";
}
