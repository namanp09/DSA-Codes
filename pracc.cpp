#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    int mid=(n)/2 +1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==mid or j==mid) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    vector<vector<int> > a;
    vector<int>temp;
    temp.push_back(1);
    temp.push_back(11);
    a.push_back(temp);
    cout<<temp.back();

}
