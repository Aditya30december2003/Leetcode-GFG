class Solution {
public:
    int calculate(string s) {
        stack<int>stk;

        int result=0;
        int number=0;
        int sign =1;

        for(int i=0;i<s.size();i++){
            // if is digit
            if(isdigit(s[i])){
                number = (number*10) + (s[i]-'0');
            }
            // if + sign
            else if(s[i] == '+'){
                // number is made
                // now add it to result
                result+=(sign*number);
                number=0;
                sign=1;
            }
            // if - sign
            else if(s[i] == '-'){
                //number is made
                //now add it to result
                result+=(sign*number);
                number=0;
                sign=-1;
            }
            // if ( sign
            else if(s[i] == '('){
                // now solve all this is in ()
                stk.push(result);
                stk.push(sign);
                // initializing for bracket
                result=0;
                number=0;
                sign=1;
            }
            // if ) sign
            else if(s[i] == ')'){
                // now bracket is closed so evaluate
                result += number*sign;
                number=0;


                int stk_sign=stk.top();stk.pop();
                int stk_num=stk.top();stk.pop();

                result*=stk_sign;
                result+=stk_num;
            }
        }
        //add the ending num
        result+=number*sign;
        return result;
    }
};