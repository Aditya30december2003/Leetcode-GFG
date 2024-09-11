//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        int count=0;
        vector<int>ans;
        stack<int>stk;
        for(int i=0;i<str.size();i++){
            //opening brackets
            if(str[i]=='('){
                count++;
                ans.push_back(count);
                stk.push(count);
            }
            //closing brackets
            else if(str[i]==')'){
                ans.push_back(stk.top());
                stk.pop();
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends