#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void rotate(int array[],int N)
{
    int last = array[N-1];
    for(int i = N-1; i>0; i--)
    {
        array[i]=array[i-1]; 
    }
    array[0] = last;
}
int main()
{
int N;
cin>>N;
int Array[N];
for(int i = 0; i<N; i++)
{
    cin>>Array[i];
}
rotate(Array,N);
for(int i = 0; i<N; i++)
{
    cout<<Array[i]<<" ";
}

return 0 ;
}