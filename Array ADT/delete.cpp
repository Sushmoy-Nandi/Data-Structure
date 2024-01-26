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

    void Delete(int index)
    {
        int x=0;
        if(index>0 && index < length)
        {
            x=A[index];
            for(int i=index;i<length-1;i++)
            {
                A[i]=A[i+1];
            }
            length--;
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
    arr.Delete(3);
    arr.Display();
    return 0;
}