class Solution {
public:
    int fib(int n) {
        
        if(n<=1)
        return n;

        int current ,  prev = 1 , prev2=0;

        for(int i=2;i<=n;i++){
            current = prev + prev2;
            prev2=prev;
            prev=current;
        }

        return current; 
    }
};