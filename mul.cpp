#include<iostream>
using namespace std;
int main(){
    int p,q;
    int r,s;
    int a[p][q];
    int b[r][s];
    cin>>p>>q>>r>>s;
    if(q==r){
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>a[i][j];
            }    
        }
         for(int i=0;i<r;i++){
            for(int j=0;j<s;j++){
                cin>>b[i][j];
            }    
        }

        //resltant
            int res[p][s];
           
        for(int i=0;i<p;i++){
            for(int j=0;j<s;j++){
                 res[i][j]=0;
                 for(int k=0;k<r;k++){
                    res[i][j]= res[i][j] + a[i][k] * b[k][j];
                 }

    }
        }
         for(int i=0;i<p;i++){
            for(int j=0;j<s;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
         }
    }
}












