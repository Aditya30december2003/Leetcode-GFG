//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int sum = 0;

        // Traverse the array
        for (int i = 0; i < arr.size(); i++) {
            // Count the number of segments for arr[i]
            sum += (arr[i] / k);  // Full segments
            if (arr[i] % k != 0) {  // Check if there's a remaining part
                sum++;
            }
        }

        return sum;
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.totalCount(k, arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends