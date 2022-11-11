#include <iostream>

using namespace std;

void fill(int* arr, const int n);
int change(int* arr, const int n);

int main()
{
    const int n = 10;
    int zeroCount = 0;
    double S;
    int arr[n];
    cout << "Please fill array: ";
    fill(arr, n);
    S = change(arr, n);

    delete[] arr;
}

void fill(int* arr, const int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int change(int* arr, const int n)
{
    int S = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            return change(arr, n);
        }
    }
    return S;
}