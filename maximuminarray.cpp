#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i<N; i++)
    {
        cin>>arr[i];
    }
    int maximum = arr[0];

    for(int i = 1; i<N; i++)
    {
        if(arr[i] > maximum)
        {
           maximum = arr[i];
        }
    }
    cout<<maximum<<endl;
    return 0 ;
}