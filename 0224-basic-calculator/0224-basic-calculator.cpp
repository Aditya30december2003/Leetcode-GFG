class Solution {
public:
    int calculate(string s) {
        stack<int>stk;
        int result=0;
        int number=0;
        int sign  =1;

        for(int i=0;i<s.size();i++){
          //digit
          if(isdigit(s[i])){
            number=(number*10) +(s[i]-'0');
          }
          // + sign
          else if(s[i] == '+'){
            // number bn gya hai
            result+=(number*sign);
            number=0;
            sign=1;
          }
          // - sign
          else if(s[i] == '-'){
            // number bn gya hai
            result+=(number*sign);
            number=0;
            sign=-1;
          }
          // ( sign
          else if(s[i] == '('){
            //now repeat the whole procedure in ( all over again
            stk.push(result);
            stk.push(sign);

            result=0;
            number=0;
            sign=1;
          }
          // ) sign
          else if(s[i]==')'){
            //now evaluate the whole pprocess
            result+=number*sign;
            number=0;
            
            int stk_sign=stk.top();stk.pop();
            int stk_num = stk.top();stk.pop();

            result*=stk_sign;
            result+=stk_num;
          }
        }

        // last num
        result+=(sign*number);
        return result;
    }
};