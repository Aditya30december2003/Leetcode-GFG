class Solution {
public:
    int Solve(int a , int b , string str){
        int result;
        if(str=="+"){
            result=a+b;
        }
        else if(str=="-"){
            result=a-b;
        }
        else if(str=="*"){
            result=a*b;
        }
        else if(str=="/"){
            result=a/b;
        }

        return result;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;

        for(string &st:tokens){
            if(st=="+" || st=="-" || st=="*" || st=="/"){

              int b = stk.top();stk.pop();
              int a = stk.top();stk.pop();

              int result = Solve(a , b , st);

              stk.push(result);
            }else{
              stk.push(stoi(st));
            }
        }

        return stk.top();
    }
};