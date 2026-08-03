class Solution {
public:
    int hammingWeight(uint32_t n) {
        std::bitset<32> bitty {n};
        return bitty.count();

    }
};
