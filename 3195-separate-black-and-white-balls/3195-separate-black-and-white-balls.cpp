class Solution {
public:
    long long minimumSteps(string s) {
        long long countOnes=0;
        long long swaps=0;

        for(char ch:s){
            if(ch=='1')
            countOnes++;
            else 
            swaps+=countOnes;
        }
        return swaps;
    }
};