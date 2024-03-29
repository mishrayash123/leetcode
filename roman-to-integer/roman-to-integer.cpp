class Solution {
public:
    int romanToInt(string s) {
       int value = 0;
        char prev = 0;
        for (auto& c : s)
        {
            switch(c)
            {
                case 'I':
                    value += 1;
                    break;
                case 'V':
                    value += 5;
                    if (prev == 'I')
                        value -= 2;
                    break;
                case 'X':
                    value += 10;
                    if (prev == 'I')
                        value -= 2;
                    break;
                case 'L':
                    value += 50;
                    if (prev == 'X')
                        value -= 20;
                    break;
                case 'C':
                    value += 100;
                    if (prev == 'X')
                        value -= 20;
                    break;
                case 'D':
                    value += 500;
                    if (prev == 'C')
                        value -= 200;
                    break;
                case 'M':
                    value += 1000;
                    if (prev == 'C')
                        value -= 200;
                    break;
            }
            prev = c;
        }
        
        return value;  
    }
};