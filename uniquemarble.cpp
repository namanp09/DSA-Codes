#include<iostream>
#include<vector>
#include<set>
using namespace std;
int solve(set<int>&s,int n ,int a,int b){
    if(n<=0)return 0;
    s.insert(n);
    int op1= solve(s,n-a,a,b);
    int op2= solve(s,n-b,a,b);

    return s.size();
}


int main(){
    int n=10;
    int a=2;
    int b=3;
    set<int>s;
 int ans=solve(s,n,a,b);
 cout<<ans;
}