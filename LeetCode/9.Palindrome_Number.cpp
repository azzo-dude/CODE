class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long re = 0, temp = x;
        while(temp != 0) {
            int dec = temp % 10;
            re = re * 10 + dec;
            temp /= 10;
        }
        return (re == x);
    }
};
