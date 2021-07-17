#include <bits/stdc++.h>
using namespace std;
void getminmax(int array[],int N)
{
    int maximum = array[0];
    int minimum = array[0];

    for(int i = 1; i<N; i++)
    {
        if(array[i] > maximum)
        {
           maximum = array[i];
        }
        if(array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    cout<<"min = "<<minimum<<","<<"max = "<<maximum<<endl;
}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i<N; i++)
    {
        cin>>arr[i];
    }
    
   getminmax(arr,N);
    return 0 ;
}