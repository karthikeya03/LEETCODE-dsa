class Solution {
    public boolean isPalindrome(int x) {
        // Negative numbers and numbers ending with 0 (but not 0 itself) can't be palindromes.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int rev = 0;
        int num = x;

        while (num != 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        return x == rev;
    }
}
