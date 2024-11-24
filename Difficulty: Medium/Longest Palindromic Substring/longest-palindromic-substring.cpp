//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool solve(string s , int i , int j){
        if(i>=j)
        return true;
        
        if(s[i]==s[j])
        return solve(s , i+1 , j-1);
        
        return false;
    }
    string longestPalindrome(string s){
        // code here 
        
        int maxLen=INT_MIN;
        int start=0;
        
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(solve(s , i , j)){
                    if(j-i+1>maxLen){
                        maxLen=j-i+1;
                        start=i;
                    }
                }
            }
        }
        
        return s.substr(start , maxLen);
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends