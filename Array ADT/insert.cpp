#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;

    void Display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }

    void Append(int x)
    {
        if (length < size)
        {
            A[length++] = x;
        }
    }

    void Insert(int index, int x)
    {
        if (index >= 0 && index <= length)
        {
            for (int i = length; i > index; i--)
                A[i] = A[i - 1];
            A[index] = x;
            length++;
        }
    }
};

int main()
{
    Array arr;
    // arr.A[0] = 10;
    // arr.A[1] = 20;
    // arr.A[2] = 30;
    // arr.A[3] = 40;
    // arr.A[4] = 50;

    // user input
    for(int i=0;i<arr.length;i++)
    {
        cin>> arr.A[i];
    }

    arr.size = 10;
    arr.length = 5;
    //arr.Append(10);
    arr.Insert(4,100);
    arr.Display();
    return 0;
}