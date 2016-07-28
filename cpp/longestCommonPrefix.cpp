class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if (strs.size() == 0) return result;
        sort(strs.begin(), strs.end());
        string begin = *strs.begin();
        string end = *(strs.end() - 1);
        int size = begin.size() < end.size() ? begin.size() : end.size();
        for (int i = 0; i < size; ++ i) {
            if (begin[i] == end[i]) result += begin[i];
            else return result;
        }
        return result;
    }
};
