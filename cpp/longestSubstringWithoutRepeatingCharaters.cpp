class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string subString = "";
        int maxLength = 0, length = 0;
        for(auto it = s.begin(); it != s.end(); ++it)
            {
                size_t pos = subString.find_first_of(*it);
                subString.push_back(*it);
                if(pos == string::npos)
                    {
                        length ++;
                        if(length > maxLength) maxLength = length;
                    }
                else
                    {
                        subString.erase(0, pos + 1);
                        length -= pos;
                    }
            }

            return maxLength;
    }
};
