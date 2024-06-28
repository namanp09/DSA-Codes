#include<iostream>
using namespace std;
void printIncDec(int n,int i){
    if(i>n) return;
    cout<<i<<" ";
    printIncDec(n,i+1);
    if(i>1) cout<<i-1<<" ";
}
int main(){
    int n;
    cin>>n;
    int i=1;
    printIncDec(n,i);
}