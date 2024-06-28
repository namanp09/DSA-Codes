#include<iostream>
using namespace std;
int sum(int n){
    int ans=0;
    if(n==0){
        return ans;
    }
    ans= n+sum(n-1);
    return ans;

}

int main()
{
int n;
cin>>n;
int ans= sum(n);
cout<<ans;
} 
