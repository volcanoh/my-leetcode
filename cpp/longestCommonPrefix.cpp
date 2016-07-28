// bool compare(string a, string b) {
//     return a.size() < b.size();
// }
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if (strs.size() == 0) return result;
//          sort(strs.begin(), strs.end(), compare);
        result = *strs.begin();
        while(result.size() != 0) {
            bool inBreak = false;
            for (vector<string>::iterator it = strs.begin(); it != strs.end(); ++it) {
                if (it->find(result) != 0) {
                    result = result.substr(0, result.size() - 1);
                    inBreak = true;
                    break;
                }
            }
            if (!inBreak) break;
        }
        return result;
    }
};
