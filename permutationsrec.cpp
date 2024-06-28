#include<iostream>
#include<string>
#include<sstream>
#include<unordered_map>
#define pp pair<int,string> 
#include<queue>
using namespace std;
void permutations(string original, string ans){
    if(original=="") {
        cout<<ans<<endl;
        return;
    }
    
    for(int i=0;i<original.length();i++){
    char ch=original[i];
    string left=original.substr(0,i);
    string right=original.substr(i+1);

    permutations(left+right, ans+ch);
    }

}

int main(){
    string original="abc";
    permutations(original, "");
}