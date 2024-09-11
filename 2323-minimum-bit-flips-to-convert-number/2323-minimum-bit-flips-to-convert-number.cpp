class Solution {
public:
    int minBitFlips(int start, int goal) {
        // XOR the two numbers to find which bits differ
        int x = start ^ goal;
        
        // Count the number of 1's in the XOR result (number of differing bits)
        int count = 0;
        while (x > 0) {
            count += (x & 1);  // Check if the last bit is 1
            x >>= 1;           // Right shift to check the next bit
        }
        
        return count;
    }
};
