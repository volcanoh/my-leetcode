class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)return false;
        int reverseHalfNumber = 0;
        int xSlow = x, xFast = x;
        for(; xFast; xSlow /= 10,xFast /= 100) reverseHalfNumber = 10 * reverseHalfNumber + xSlow % 10;
        return reverseHalfNumber == xSlow || reverseHalfNumber/10 == xSlow;
    }
};
