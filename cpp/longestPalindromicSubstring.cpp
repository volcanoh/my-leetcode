class Solution {
public:
    string longestPalindrome(string s) {
        string subString = "";
        int i, j, k = 0;
        int size = s.length();
        int begin, end = 0;
        if(size == 1) 
        {
            subString.push_back(s.at(0));
            return subString;
        }
        for(i = 0; i < size - 1; ++i)
        {
            j = i;k = i + 1;
            if(s.at(j) != s.at(k))
            {
                k--;
                while(j > 0 && k < size - 1)
                {
                    if(s.at(j - 1) == s.at(k + 1))j--, k++;
                    else break;
                }
            }
            else
            {
                int k1 = k-1, j1 = j;
                while(j1 > 0 && k1 < size - 1)
                {
                    if(s.at(j1 - 1) == s.at(k1 + 1)) j1--,k1++;
                    else break;
                }
                int k2 = k, j2 = j;
                while(j2 > 0 && k2 < size - 1)
                {
                    if(s.at(j2 - 1) == s.at(k2 + 1)) j2--,k2++;
                    else break;
                }
                if(k2 - j2  > k1 - j1) k = k2, j = j2;
                else k = k1, j = j1;
            }
            if(k - j > end - begin) end = k, begin = j;
        }
        subString = s.substr(begin, end - begin + 1);
        return subString;
    }
};
