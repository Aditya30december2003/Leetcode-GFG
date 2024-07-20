class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n){
            if((n&1)==1){
                count+=1;
            }
            n=n>>1;
        }
        return count;
    }
};