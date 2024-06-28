#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || (i+j)==(m-1) )
            cout<<a[i][j]<<" ";
        
    }
}
}