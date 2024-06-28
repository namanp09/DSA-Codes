#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <climits>  // Use this for LLONG_MAX

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Determine if the array can be made beautiful
        unordered_set<int> mod_values;
        for (int i = 0; i < n; i++) {
            mod_values.insert(a[i] % k);
        }

        if (mod_values.size() > 1) {
            cout << -1 << endl;
            continue;
        }

        // Find the minimum number of operations
        long long min_operations = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            long long operations = 0;
            for (int j = 0; j < n; j++) {
                operations += abs(a[j] - a[i]) / k;
            }
            min_operations = min(min_operations, operations);
        }
        
        cout << min_operations << endl;
    }

    return 0;
}
