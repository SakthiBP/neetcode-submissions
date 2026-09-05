class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set <int> set1;
        for (int num : nums) {
            if (set1.find(num) != set1.end()) {
                return true;
            } else {
                set1.insert(num);
            }

        }
        return false;

    }
};