#include<bits/stdc++.h>
#define size 1000
using namespace std;

bool prime(int n)
{     int count =0;
    for(int i=2;i<=sqrt(n);i++)
      {
          if(n%i==0)
          count++;
      }
      if(count>0)
      return false;
      else
      return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[size]={0};
    for(int i=2;i<=n;i++){
        if(arr[i]==0)
        {
            if(!prime(i))
            arr[i]=1;
        }
    }
    
    
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        cout<<i<<" ";
    }
    
    // if( prime(num))
    // {
    //     cout<<"prime nos";
        
    // }
    // else
    // cout<<"not prime";
}
