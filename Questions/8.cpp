#include <bits/stdc++.h>
using namespace std;

void accept(int arr[20][20])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void multiply(int arr[20][20], int arr2[20][20], int m[20][20])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = arr[i][j] * arr2[i][j];
        }
    }
}

void display(int arr[20][20])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[20][20], arr2[20][20], m[20][20];
    cout << "Enter the elements for matix 1 " << endl;
    accept(arr);
    cout << "Enter the elements for matix 2 " << endl;
    accept(arr2);
    cout << "\n";
    multiply(arr, arr2, m);
    cout << "Multiplication of two matrices are" << endl;
    display(m);
}