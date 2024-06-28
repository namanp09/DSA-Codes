#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nst=1;
    int nsp=n-1;

    for(int i=0;i<n;i++){

    for(int i=1;i<=nsp;i++){
        cout<<" ";
        }
        nsp--;

    for(int j=1;j<=nst;j++){
        cout<<"*";
    }
    nst+=2;
    cout<<endl;
    }

}
