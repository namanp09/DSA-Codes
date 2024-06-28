#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans, string original, vector<string>&v,bool flag){ //v is final answer which stores subsets(ans)
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,true);
        return; // taki neeche ki 2 conditions na chale
    }
    char dh= original[1];
    if(ch==dh){ //duplicate
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,false);
    }
    else{
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
         storeSubset(ans,original.substr(1),v,true);
    }
  
}

int main(){
    
    string str;
    int n=str.length();
    getline(cin,str);
    sort(str.begin(),str.end());
    vector<string> v;
    storeSubset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }    
}