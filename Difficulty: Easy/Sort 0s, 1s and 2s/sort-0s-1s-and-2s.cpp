//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sort012(vector<int>& arr) {
        unordered_map<int , int>umap;
        
        for(auto x:arr)
        umap[x]++;
        
        //for 0s
        int index = 0;

        // Add all 0s
        if (umap.find(0) != umap.end()) {
            int Zcount = umap[0];
            for (int i = 0; i < Zcount; i++) {
                arr[index++] = 0;
            }
        }

        // Add all 1s
        if (umap.find(1) != umap.end()) {
            int Ocount = umap[1];
            for (int i = 0; i < Ocount; i++) {
                arr[index++] = 1;
            }
        }

        // Add all 2s
        if (umap.find(2) != umap.end()) {
            int Scount = umap[2];
            for (int i = 0; i < Scount; i++) {
                arr[index++] = 2;
            }
        }
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends