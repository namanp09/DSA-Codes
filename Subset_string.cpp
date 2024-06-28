#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans, string original, vector<string>&v){ //v is final answer which stores subsets(ans)
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    storeSubset(ans,original.substr(1),v);
    storeSubset(ans+ch,original.substr(1),v);
}

int main(){
    
    string str;
    int n=str.length();
    getline(cin,str);
    vector<string> v;
    storeSubset("",str,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }    
}