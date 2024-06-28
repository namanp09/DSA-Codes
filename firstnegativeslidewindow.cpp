#include<iostream>
#include<vector>
using namespace std;

/* int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=9;
    int k=4;

    vector<int>ans(n-k+1);
    int idx=0;
    int i=0;
    int j=k-1;
    while(j<n){
        int p=i;
        int q=j;

        while(p<q){ 
            if(arr[p]<0){
                ans[idx]=arr[p];
                idx++;
                break;
            }
            p++;
        }

        i++;j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        }
} */

int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=9;
    int k=3;
    int p=-1;
    vector<int>ans(n-k+1);

    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    }

    if(p==-1) ans[0]=1;
    else ans[0]=arr[p];
    int i=1;
    int j=k;

    while(j<n){
        if(p>=i) ans[i]=arr[p];
       else{
        p=-1;
        for(int x=i;x<=j;x++){
            if(arr[x]<0){
                p=x;
                break;
            }
        }
        if(p==-1) ans[i]=1;
        else ans[i]=arr[p];
       }
        i++;
        j++;
}

for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        }
}