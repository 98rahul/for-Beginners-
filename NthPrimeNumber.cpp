#include<bits/stdc++.h>
#define max 1000
using namespace std;

bool chekprime(int m)
{ int count =0;
    for(int i=2;i<=sqrt(m);i++)
    {
        if(m%i==0)
        count++;
    }
    
    if(count>0)
    return false;
    else
    return true;
}
void nthprime(vector<int>&vec)
{
for(int i=2;i<=max;i++)
{
    if(chekprime(i))
    {
        vec.push_back(i);
    }
}

}
int main(){
    
    vector<int>vec;
    nthprime(vec);
    cout<<"5th prime no. is "<<vec[4];
}
