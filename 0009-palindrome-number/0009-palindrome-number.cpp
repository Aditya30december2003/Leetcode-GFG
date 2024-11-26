class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0)
       return false;

       vector<int>arr;
       while(x>=1){
        arr.push_back(x%10);
        x/=10;
       } 
       int s=0 , e=arr.size()-1;
       while(s<e){
        if(arr[s]!=arr[e])
        return false;

        s++;
        e--;
       }
       return true;
    }
};