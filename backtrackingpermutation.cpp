#include<iostream>
#include<string>
using namespace std;

void permutations(string &str, int i){
    if(i==str.size()-1){
        cout<<str<<endl;
        return;
    }
    for (int j=i;j<str.size();j++){
        swap(str[i], str[j]);
        permutations(str,i+1);
        //Backtracking to undo the effect of swapping done in this iteration
        swap(str[i], str[j]);

    }
}
int main(){
    string s="abc";
    permutations(s, 0);
}