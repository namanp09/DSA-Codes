#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

void permutations(string &str, int i){
    if(i==str.size()-1){
        cout<<str<<endl;
        return;
    }
    unordered_set<char> s;

    for (int j=i;j<str.size();j++){
        if(s.count(str[j])) continue;
        s.insert(str[j]);
        swap(str[i], str[j]);
        permutations(str,i+1);
        //Backtracking to undo the effect of swapping done in this iteration
        swap(str[i], str[j]);

    }
}
int main(){
    string s="aac";
    permutations(s, 0);
}