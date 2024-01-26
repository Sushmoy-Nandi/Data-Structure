#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;

    int BinarySearch(int key){
        int low=0;
        int high=length-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(key == A[mid])
            {
                return mid;
            }
            else if(key<A[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
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
    int index=arr.BinarySearch(50);
    if(index == -1){
        cout<<"Not Found";
    }
    else
    {
        cout<<"Key is at index: "<< index;
    }
    cout<<endl;
    return 0;
}