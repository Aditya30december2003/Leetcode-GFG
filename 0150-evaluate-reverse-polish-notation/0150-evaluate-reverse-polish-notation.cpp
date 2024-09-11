class Solution {
public:
    int Solve(int a , int b , string op){
     int result;
     if(op=="+")
     result=a+b;

     else if(op=="-")
     result=a-b;

     else if(op=="*")
     result=a*b;

     else
     result=a/b;

     return result;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;

        for(string &token : tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                
                int b = stk.top();stk.pop();
                int a = stk.top();stk.pop();

                int result = Solve(a , b , token);

                stk.push(result);
            }else{
                stk.push(stoi(token));
            }
        }
        return stk.top();
    }
};