class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int bit{};
        uint32_t y{};
        for(int i = 0; i < 32; i++){
            bit = n & 1;
            y <<= 1;
            y = y | bit;
            n >>= 1;
        }
        return y;
    }
};
