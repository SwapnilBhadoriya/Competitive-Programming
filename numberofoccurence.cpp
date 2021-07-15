#include <iostream>
using namespace std;
int frequency(int index,int array[],int N,int key)
{
    int left = index;
    int right = index+1;
    int count = 0;
    while(array[left] == key && left >= 0)
    {
        count++;
        left--;
    }
    while(array[right] == key && right < N )
    {
        count++;
        right++;
    }

    return count ;
}
int binarysearch(int array[],int N,int key)
{
    int start = 0; 
    int end = N-1;
    int index = -1;
   while(start <= end)
   {
       int mid = (start + end)/2;
       if(array[mid] == key)
       {
           index = mid;
       }
       if(array[mid] < key)
       {
           start  = mid + 1;
       }
       else 
       end = mid - 1;
   }

   return index ;

}
int main()
{
    int N;
    cin>>N;
    int array[N];
    for(int i = 0; i<N; i++)
    {
        cin>>array[i];
    }
     int x;
    cin>>x;
    int ans = binarysearch(array,N,x);
    if(ans != -1)
    {
        int frequencycount = frequency(ans,array,N,x);
        cout<<frequencycount<<endl;
    }
    cout<<"0"<<endl;

    return 0;
}