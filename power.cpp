#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    if(b==0){
        return ans;
    }
   
    ans= a * power(a,b-1);
    return ans;
}

int main()
{
int a,b;
cin>>a;
cin>>b;
int ans= power(a,b);
cout<<ans;
} 