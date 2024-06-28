#include<iostream>
#include<string>
using namespace std;
void permutations(string que, string ans){

    if(que.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<que.length();i++){
        char c = que[i];
        string left = que.substr(0,i);
        string right = que.substr(i+1);
        string rest = left+right;
        permutations(rest,ans+c);
    }
}
int main(){
    string ques="abc";
    cout<<"The Permutation of the Given String is: "<<endl;
    permutations(ques,"");





}