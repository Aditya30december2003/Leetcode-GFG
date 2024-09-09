class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;

        long long reverse=0;
        long long num=x;
        while(num>=1){
         int ones = num%10;
         reverse = reverse*10 + ones;

         num/=10;
        }

        
        return reverse == x;
    }
};