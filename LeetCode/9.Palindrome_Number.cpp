class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long re = 0, temp = x;
        while(temp != 0) {
            re = re * 10 + temp % 10;
            temp /= 10;
        }
        return (re == x);
    }
};
