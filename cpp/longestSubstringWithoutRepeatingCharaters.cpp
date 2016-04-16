class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string subString = "";
        int maxLength = 0;
        for(auto it = s.begin(); it != s.end(); ++it)
            {
                int length = 0;
                if(subString.find(*it) == string::npos)
                    {
                        // subString.append(*it);
                        subString += *it;
                        length ++;
                    }
                else
                    {
                        if(length > maxLength)
                            {
                                maxLength = length;
                            }
                        subString.clear();
                    }
            }
    }
};
