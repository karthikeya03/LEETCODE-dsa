class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num > 0) {
            if (num % 2 == 0) {
                // Number is even
                num = num / 2;
                count++;
            } else {
                // Number is odd
                num = num - 1;
                count++;
            }
        }
        return count;
    }
};