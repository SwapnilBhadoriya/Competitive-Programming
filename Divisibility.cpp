#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    int Number = 0; 
    int remainder = 0;
    for(int i = 0; i<N; i++)
    {
        cin>>A[i];
        remainder = A[i]%10;
         Number  = (Number*10) + remainder ;
    }
    cout<<Number<<endl;
    if(Number%10 == 0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

    return 0 ;
    
}