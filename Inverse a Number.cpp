#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;// a five digit number with no repeation like 23451(correct) 22334(not correct)
    //eg. . The inverse of a number is defined as the number created by interchanging the face value and index of digits of number.e.g. for 426135 (reading from right to left, 5 is in place 1, 3 is in place 2, 1 is in place 3, 6 is in place 4, 2 is in place 5 and 4 is in place 6), the inverse will be 416253
    
    int counter=1,ans=0;
    while(n!=0)
    {
        int rem=n%10;
        n/=10;
        ans+=counter*pow(10,rem-1);
        counter++;
    }
    cout<<ans;
}
