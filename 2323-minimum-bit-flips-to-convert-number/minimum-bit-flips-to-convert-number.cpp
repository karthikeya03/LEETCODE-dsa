class Solution {
public:
    int minBitFlips(int start, int goal) {
        int bit = start ^ goal;  
        int count = 0;
        while (bit) {
            count += (bit & 1);  // Add the least significant bit to count
            bit >>= 1;           // Shift right by 1 to process the next bit
        }
        return count;
    }
};
