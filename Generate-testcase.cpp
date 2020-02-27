/*
This generate atleast 10 random numbers
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;
#define N 10000000

int main()
{
    srand(time(0));
    int n;

    do
    {
        n = rand() % N;
    } while(n < 10);

    string str;
    cout << " Name the testcase file : ";
    cin >> str;

    ofstream out(str);
    out << n << "\n";
    int temp;
    for(int i = 0; i < n; i++)
    {
        do
        {
            temp = rand() % N;
        } while(!temp);
        out << temp << " ";
    }
    out.close();
}
