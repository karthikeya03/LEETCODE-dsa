class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
       int box[46] = {0};
for (int i = lowLimit; i <= highLimit; ++i) {
    int sum = 0, n = i;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    box[sum]++;
}
return *max_element(box, box + 46);
    }
};