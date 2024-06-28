#include<iostream>
#include<vector>
using namespace std;


double fracknapsack( vector<int>&profit, vector<int>&weights,int n,int W){
    vector< pair<int, int> >v;
    for(int i=0;i<n;i++){
       
        pair<int,int> p;
        p.first = profit[i]; p.second=weights[i];
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    double ans=0;
    for(int i=0;i<n;i++){
        if(v[i].second<=W){
            ans+=v[i].first;
            W=W-v[i].second;
        }
        else{
            ans+=( ( profit[i]*1.0 / weights[i]*1.0 )* W );
            W=0;
            break;
        }
    }
    return ans;
}

int main(){

    vector<int>profit;
    profit.push_back(60); profit.push_back(100); profit.push_back(120);
    vector<int>weights;
    profit.push_back(10); profit.push_back(20); profit.push_back(30);
    int W=50;
    int n=3;
    double a=fracknapsack(profit,weights,n,W);
    cout<<a;

}