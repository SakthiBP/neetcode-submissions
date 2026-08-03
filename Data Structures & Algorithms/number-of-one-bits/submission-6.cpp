class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result{};
        while (n > 0) {
            n = n & (n-1);
            result++;
        }
        return result;

    }
};
