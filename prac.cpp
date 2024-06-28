#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int count=0;
    int sum=0;
    while(n>0){
        sum+= (n%10);
        n=n/10;
    }
    cout<<sum;
         
}