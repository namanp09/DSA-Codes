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
// step 1 to find transpose

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        if(i<j) swap(a[i][j], a[j][i] );
    }
}
 // reverse each coloumn
 for(int j=0;j<m;j++){
    for(int i=0;i<m/2;i++){
        swap(a[i][j],a[m-1-i][j]);
    }
 }

cout<<"The rotated array is ";
cout<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
       cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}