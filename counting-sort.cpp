#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void countingSort(int *array, int n)
{
    int max = array[0];
    for(int i = 0; i < n; i++)
    {
        if(array[i] > max)
            max = array[i];
    }

    int *count = new int[max + 1];

    for(int i = 0; i < n; i++)
    {
        count[array[i]]++;
    }

    for(int i = 1; i < max+1; i++)
    {
        count[i] += count[i-1];
    }

    int *sorted = new int[n];
    for(int i = n - 1; i >= 0; i--)
    {
        sorted[--count[array[i]]] = array[i];
    }

    for(int i = 0; i < n; i++)
    {
        array[i] = sorted[i];
    }
    delete []sorted;
    delete []count;
}

int main()
{
    int n;
    //cout << "Size of array : "; commented this for testcase
    cin >> n;

    int * array = new int[n];

    for(int i = 0; i < n; i++)
        cin >> array[i];

    countingSort(array, n);
    cout << "Sorted array\n";
    for(int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << "\n";
}
