class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        int q = num / 1000;
        if(q >= 0){
            for(int i = 0; i < q; i++)
            result += "M";
        }
        int b = (num - 1000 * q) / 100;
        if(b <= 3){
            for(int i = 0; i < b; i++)
            result += "C";
        }
        else if(b == 4)
        {
            result += "CD";
        }
        else if(b <= 8)
        {
            result += "D";
            for(int i = 5; i < b; i++)
            result += "C";
        }
        else
        {
            result += "CM";
        }
        int s = (num - 1000 * q - 100 * b) / 10;
         if(s <= 3){
            for(int i = 0; i < s; i++)
            result += "X";
        }
        else if(s == 4)
        {
            result += "XL";
        }
        else if(s <= 8)
        {
            result += "L";
            for(int i = 5; i < s; i++)
            result += "X";
        }
        else
        {
            result += "XC";
        }
        int g = (num - 1000 * q - 100 * b - 10 * s);
        if(g <= 3){
            for(int i = 0; i < g; i++)
            result += "I";
        }
        else if(g == 4)
        {
            result += "IV";
        }
        else if(g <= 8)
        {
            result += "V";
            for(int i = 5; i < g; i++)
            result += "I";
        }
        else
        {
            result += "IX";
        }

        return result;
    }
};
