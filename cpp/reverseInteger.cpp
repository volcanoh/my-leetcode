class Solution {
public:
    int reverse(int x) {
        unsigned long result = 0;
        int signFlag = x < 0 ? -1 : 1;
        x *= signFlag;
        while(x)
        {
            result = result * 10 + x % 10 ;
            if(result > INT_MAX) return 0;
            x /= 10;
        }
        return result * signFlag;
    }
};
