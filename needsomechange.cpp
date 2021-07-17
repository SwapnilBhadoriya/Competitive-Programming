#include <iostream>
using namespace std;
void swapelements(int array[],int N)
{
    for(int i = 0 ; i<N-2; i++)
    {
        swap(array[i],array[i+2]);
    }
}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0 ; i<N; i++)
    {
        cin>>arr[i];
    }
    swapelements(arr,N);
    for(int k:arr )
    {
        cout<<k<<" ";
    }
    return 0 ; 
}