class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
         int binaryNum[32];
    int i = 0;
        uint32_t dec=0;
    while (n > 0) {
         dec +=  n % 2*pow(2, 31-i);
        n = n / 2;
        i++;
    }
        return dec;
    }
};