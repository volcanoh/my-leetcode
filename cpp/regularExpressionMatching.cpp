class Solution {
public:
    bool isMatch(string s, string p) {
        if(p == "")
        {
            if(s == "")return true;
            else return false;
        }
        if(s == "" )
        {
            if(p[1] == '*')return isMatch(s, p.substr(2));
            else return false;
        }
        if(p[1] != '*')
        {
            if(p[0] == s[0] || p[0] == '.') return isMatch(s.substr(1), p.substr(1));
            else return false;
        }
        else
        {
            if(isMatch(s, p.substr(2)))  return true;
            int index = 0;
            while(index < s.size() && (p[0] == s[index] || p[0] == '.'))
            {
                if(isMatch(s.substr(++ index), p.substr(2))) return true;
            }
            return false;
        }
    }
};
