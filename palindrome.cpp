#include<iostream>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int i = 0; 
    int j = S.length()-1;
    bool flag = true;
    cout<<j<<endl;
   while(i<j)
    {
        if(S[i] != S[j])
        {
            flag = false;
        }
        i++;
        j--;
    }
    if(flag == true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0 ;
}