#include<iostream>
#include<string>
#include<sstream>
#include<unordered_map>
#define pp pair<int,string> 
#include<queue>

using namespace std;


int main(){
    priority_queue<pp>pq;

    unordered_map<string,int>mp;
    string str = "Naman is a good boy . He is good is person as well Naman Naman Naman zaba zabb";
    stringstream ss(str);
    string word;
    vector<string>vs;

    while(ss>>word){
        vs.push_back(word);
        mp[word]++;
    }
    
     for(auto x:mp){
       pp p1;
       p1.first = x.second;
       p1.second = x.first;
       pq.push(p1);
    }
    cout<<(pq.top()).second<<endl;

   sort(vs.begin(),vs.end());
   cout<<vs[vs.size()-1]<<endl;

   string s="a";
   string s2="b";
   string s1="    ";
   string c=s+s1+s2;
   cout<<c;



}
