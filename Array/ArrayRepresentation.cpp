#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[5];
    // int B[5]={1,2,3,4,5};
    // int C[10]={2,4,6};
    // int D[5]={0};
    // int E[]={1,2,3,4,5,6};

    // cout<<A[0]<<endl;
    // cout<<A[1]<<endl;
    // cout<<A[2]<<endl;
    // cout<<A[3]<<endl;
    // cout<<A[4]<<endl;
    // cout<<B[5]<<endl;
    // cout<<C[5]<<endl;
    // cout<<D[5]<<endl;
    // cout<<E[5]<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<&A[i]<<endl;
    }

    return 0;
}