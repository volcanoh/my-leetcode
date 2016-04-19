class Solution {
public:
    int myAtoi(string str) {
        unsigned long result = 0;
        int size = str.length();
        if(size == 0)return 0;
        int sign = 1;
        int flag = 0;
        auto it = str.begin();
        while(*it == ' ')it ++;
        here:
        if(*it == '-')
        {
            if(flag == 1)return 0;
            sign = -1; it ++; flag = 1;
            goto here;
        }
        if(*it == '+')
        {
            if(flag == 1)return 0;
            it ++; flag = 1;
            goto here;
        }
        for(; it != str.end(); it++)
        {
            if(*it < '0' || *it >'9')break;
            result = 10 * result + *it - '0';
            if(sign == 1 && result >= INT_MAX)return INT_MAX;
            else if(sign == -1 && result != 0 && result -1 >= INT_MAX) return -INT_MAX - 1;
        }
        return result * sign;
    }
};
