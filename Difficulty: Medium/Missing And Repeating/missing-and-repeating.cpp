//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int> ans(2);  // Vector to store the result: ans[0] = duplicate, ans[1] = missing
        unordered_set<int> s;

        // Find the duplicate element
        for (int &num : arr) {
            if (s.find(num) != s.end()) {
                ans[0] = num;  // Duplicate found
            } else {
                s.insert(num);
            }
        }

        // Find the missing element
        for (int i = 1; i <= arr.size(); i++) {
            if (s.find(i) == s.end()) {
                ans[1] = i;  // Missing element found
                break;
            }
        }

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends