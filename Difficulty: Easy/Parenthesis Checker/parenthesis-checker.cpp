//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>stk;
        
        for(char&ch:x){
            if(stk.empty()){
                if(ch==')' || ch=='}' || ch==']')
                return false;
                else
                stk.push(ch);
            }
            else{
                if(stk.top()=='('){
                    if(ch==')')
                    stk.pop();
                    else
                    stk.push(ch);
                }
                else if(stk.top()=='{'){
                    if(ch=='}')
                    stk.pop();
                    else
                    stk.push(ch);
                }
                else{
                    if(ch==']')
                    stk.pop();
                    else
                    stk.push(ch);
                }
            }
        }
        return stk.empty() ? true : false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends