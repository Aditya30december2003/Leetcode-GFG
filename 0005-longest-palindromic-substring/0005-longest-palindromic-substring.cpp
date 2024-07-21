class Solution {
public:
    string longestPalindrome(string s) {
        // we have to keep tab if palindrome is of even length or odd length.
     if(s.length()<=1){
        return s;
     }
     int max_len=1; // max length is initialized to 1
     int start = 0 , end = 0;
     int n=s.length();
     // for odd length of palindrom--> there will be a middle letter
     for(int i=0;i<n-1;i++){
        int l=i , r=i;
        while(l>=0 && r<n ){
            if(s[l]==s[r]){
                l-- , r++;
            }
            else{
                break; //break the loop
            }
        }
        int len=r-l-1; // this will be the length 
        if(len>max_len){
            max_len=len;
            start=l+1;  // we have to keep track of start of palindrome
            end = end-1; // end of palindrome
        }

     }

    //Even length
    for(int i=0;i<n-1;i++){
        int l=i , r=i+1;
        while(l>=0 && r<n ){
            if(s[l]==s[r]){
                l-- , r++;
            }
            else{
                break; //break the loop
            }
        }
        int len=r-l-1; // this will be the length 
        if(len>max_len){
            max_len=len;
            start=l+1;  // we have to keep track of start of palindrome
            end = end-1; // end of palindrome
        }

     }

     return s.substr(start , max_len);

    }
};