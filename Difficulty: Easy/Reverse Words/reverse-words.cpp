//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        stack<string>stk;
        for(int i=0;i<str.size();i++){
            string word="";
            while(str[i]!='.' && i<str.size()){
                word+=str[i];
                i++;
            }
            stk.push(word);
        }
        string ans="";
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
            if(!stk.empty()){
                ans+='.';
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
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends