#include<iostream>
using namespace std;
int main(){
    int m;
   
    cin>>m;
    int n; cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
       }
    }
    int key;
    cin>>key;
    int i=0;
    int j= n-1;
    while((i<m) && (j>=0)){
       
        if(a[i][j]==key) {
           cout<<"Key is found";
           break;
        }
       else if(a[i][j]>key) {j--;}
        else{ // a[i][j]<key
        i++;
        }
    }
}