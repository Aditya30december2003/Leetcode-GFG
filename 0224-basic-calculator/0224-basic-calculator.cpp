class Solution {
public:
    int calculate(string s) {
        stack<int>stk;
        int result=0;
        int number=0;
        int sign =1; // shuru mein +

        for(int i=0;i<s.size();i++){
            // digit 
            if(isdigit(s[i])){
                // make the number
                number=number*10 + (s[i]-'0');
            }
            // + sign
            else if(s[i] == '+'){
                // number bn chuka hai
                //result mein add kro
                result += (number*sign);
                number=0;
                sign=1;  // + sign
            }
            // - sign
            else if(s[i] == '-'){
                //number bn chuka hai
                // result mein add kro
                result += (number*sign);
                number=0;
                sign=-1;
            }
            // ( sign
            else if(s[i] == '('){ // ab bracket k andar ka calc kro
                stk.push(result);
                stk.push(sign);
                // wapis jo krre hai bracket k andar chalu kro
                result=0;
                number=0;
                sign=1;
            }
            // ) sign
            else if(s[i] == ')'){
                result += (number*sign);
                number=0;

                int stk_sign = stk.top();stk.pop();
                int last_result = stk.top();stk.pop();

                result*=stk_sign;
                result+=last_result;
            }
        }

        // now add the last number 1 + (2+3) - 4 // here -4 is to add
        result+= number*sign;
        return result;
    }
};