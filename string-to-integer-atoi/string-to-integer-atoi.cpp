class Solution {
public:
    int myAtoi(string s) {
        
        while(s[0] == ' '){s.erase(s.begin());}
        bool neg = false;
        if (s[0] == '-' or s[0] == '+'){neg = s[0] == '-'; s.erase(s.begin());}
        uint32_t number = 0;
        for (char c : s) {
            if (!isdigit(c)){break;}
            if (number > (INT_MAX - c + '0') / 10){return neg ? INT_MIN : INT_MAX;}
            number = number * 10 + c - '0';
        }
        return neg ? -number : number;
        
        
        
        
        
        
        // int a=INT_MAX;
        // string str="";
        // for(int i=0;i<s.size();i++){
        //     if(!(s[i]==45|| s[i]==' ' ||(s[i]>=48 && s[i]<=57))){
        //         if(str.size()==0){
        //         str=str+'0';
        //         }
        //         break;
        //     }
        //     if(s[i]==45 || (s[i]>=48 && s[i]<=57)){
        //         str=str+s[i];
        //     }
        // }
        // if(stoi (str)>INT_MAX){
        //     return INT_MAX;
        // }
        // else{
        //     if(stoi (str)<INT_MIN){
        //         return INT_MIN;
        //     }
        //     else{
        //        return stoi (str); 
        //     }
        // }
    }
};