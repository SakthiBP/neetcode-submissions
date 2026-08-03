class Solution {
public:
    int hammingWeight(uint32_t n) {
        std::bitset<32> bitty {n};
        int result{};
        for(int i = 0; i< 32; i++) {
            if(bitty[i]) {
                result++;
            }
        }

        return result;

    }
};
