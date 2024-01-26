#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;

    int LinearSearch(int key){
        for(int i=0;i<length;i++){
            if(A[i] == key){
                return i;
            }
            
        }  
        return -1;
    }
};
int main()
{
    Array arr;
    // user input
    for(int i=0;i<arr.length;i++)
    {
        cin>>arr.A[i];
    }

    arr.size = 10;
    arr.length = 5;
    int index=arr.LinearSearch(50);
    if(index == -1){
        cout<<"Not Found";
    }
    else
    {
        cout<<"Key is at index: "<< index;
    }
    //arr.Display();
    return 0;
}