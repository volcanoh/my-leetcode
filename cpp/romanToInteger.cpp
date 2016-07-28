class Solution {
public:
    int romanToInt(string s) {
        static const string roman[4][10]= 
            { 
                {"","I","II","III","IV","V","VI","VII","VIII","IX"},
                {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                {"","M","MM","MMM"},
            };
            int num[4] = {0, 0, 0, 0};
            for (int i = 3; i >= 0; --i) {
                int J = i==3 ? 4 : 10;
                for (int j = J - 1; j >= 0; --j) {
                    if (s.find(roman[i][j]) == 0) {
                        s = s.substr(roman[i][j].size(), s.size() - roman[i][j].size());
                        num[i] = j;
                        break;
                    }
                }
            }
            return num[3] * 1000 + num[2] * 100 + num[1] * 10 + num[0]; 
    }
};
