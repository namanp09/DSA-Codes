#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nst=1;
    int nsp=n-1;

    for(int i=1;i<=2*n-1;i++){

    for(int i=1;i<=nsp;i++){
        cout<<" ";
        }
        if(i<=n-1)nsp--;
        else nsp++;

    for(int j=1;j<=nst;j++){
        cout<<"*";
    }
    if(i<=n-1)nst+=2;
        else nst-=2;
    cout<<endl;
    }

}
