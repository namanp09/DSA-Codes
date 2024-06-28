#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int getKthLargest(vector<int> &arr, int k) {
    // Min-heap to store the k largest sums
    priority_queue<int, vector<int>, greater<int> > pq;

    int n = arr.size();

    // Iterate over all possible subarrays
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];  // Calculate the sum of subarray arr[i..j]
            pq.push(sum);   // Push the sum into the priority queue
            
            // If the size of the priority queue exceeds k, remove the smallest element
            if (pq.size() > k) pq.pop();
        }
    }
    
    // The top element of the priority queue is the k-th largest sum
    return pq.top();
}

int main() {
    vector<int> arr; // = {1, 2, 3, 4, 5};
    arr.push_back(1); arr.push_back(-2); arr.push_back(3); arr.push_back(-4); arr.push_back(5);
    int k = 2;
    cout << "The " << k << "th largest subarray sum is: " << getKthLargest(arr, k) << endl;
    return 0;
}