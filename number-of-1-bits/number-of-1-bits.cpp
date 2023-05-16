class Solution {
public:
    int hammingWeight(uint32_t n) {
    int binaryNum[32];
 
    int i = 0;
    while (n > 0) {
        if(n%2==1){
            i++;
        }
        n = n / 2;
    }
        return i;
//       int ans=0;
// while(n){
// n=n&(n-1);
// ans++;

//     }
//         return n;  
    }
};

