class Solution {
public:
    long s=0;
    int reverse(int x) {
           while(x!=0){
    s=s*10+x%10;
    x=x/10;
}
        if(s<INT_MIN || s>INT_MAX){
            return 0;
        }
        return int(s); 
    }
};
