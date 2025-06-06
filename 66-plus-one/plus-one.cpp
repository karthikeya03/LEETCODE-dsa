class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string s;
        for (int d : digits)
            s += (d + '0');  

        int carry = 1;
        for (int i = s.size() - 1; i >= 0; i--) {
            int sum = (s[i] - '0') + carry;
            s[i] = (sum % 10) + '0';
            carry = sum / 10;
        }

        if (carry)
            s = '1' + s;

        vector<int> result;
        for (char ch : s)
            result.push_back(ch - '0');

        return result;
    }
};
