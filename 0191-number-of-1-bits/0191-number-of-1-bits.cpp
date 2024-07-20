class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        //bits ko 1 se end krne pe agr 1 aega then the bit is one..esa krk bits ko right shifte krdo...ese loop mein saari bits check krlo.
        while(n){
            if((n&1)==1){
                count+=1;
            }
            n=n>>1;
        }
        return count;
    }
};