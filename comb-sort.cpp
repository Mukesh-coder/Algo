#include <iostream>
#include <cmath>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void combSort(int *array, int n)
{
    int gap = n;
    float shrink = 1.3;
    bool sorted = false;

    while(!sorted)
    {
        gap = floor(gap/shrink);
        if(gap <= 1)
        {
            gap =  1;
            sorted = true;
        }
        int i = 0;
        while(i+gap < n)
        {
            if(array[i] > array[i+gap])
            {
                swap(&array[i], &array[i+gap]);
                sorted = false;
            }
            i++;
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

    combSort(array, n);
    cout << "Sorted array\n";
    for(int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << "\n";
}
