#include<iostream>
#include<vector>
#include<algorithm>  // for sort

using namespace std;

// Comparator function to sort items based on value/weight ratio
bool cmp(pair<int, int> p1, pair<int, int> p2) {
    double r1 = (double)p1.first / p1.second;
    double r2 = (double)p2.first / p2.second;
    return r1 > r2;
}

// Function to calculate the maximum profit for fractional knapsack problem
double fracknapsack(vector<int>& profit, vector<int>& weights, int n, int W) {
    vector<pair<int, int> > v;
    for (int i = 0; i < n; i++) {
        v.push_back(make_pair(profit[i], weights[i]));
    }
    sort(v.begin(), v.end(), cmp);

    double ans = 0.0;
    for (int i = 0; i < n; i++) {
        if (v[i].second <= W) {
            ans += v[i].first;
            W -= v[i].second;
        } else {
            ans += (v[i].first*1.0 / v[i].second *1.0)* (W*1.0);
            break;
        }
    }
    return ans;
}

int main() {
    vector<int> profit; profit.push_back(60); profit.push_back(100); profit.push_back(120); 
    vector<int> weights; weights.push_back(10);  weights.push_back(20);  weights.push_back(30);  
    int W = 50;
    int n = profit.size();

    double max_profit = fracknapsack(profit, weights, n, W);
    cout << max_profit << endl;

    return 0;
}
