class Solution {
public:
    bool isPalindrome(string s) {
        //sliding window
        int start =0 , end=s.length()-1;
        while(start<end){
        // Move start forward if current character is not alphanumeric
           while(start<end && !isalnum(s[start])){
            start++;
           }
        // Move end backward if current character is not alphanumeric
           while(start<end && !isalnum(s[end])){
            end--;
           }
           if(tolower(s[start])!=tolower(s[end])){
            return false;
           }
           start++;
           end--;
        }
        return true;
    }
};