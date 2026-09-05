class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> unset;

        for(int i = 0; i<nums.size(); i++) {
            int missing = target - nums[i];
            if (unset.find(missing) != unset.end()) {
                return {unset[missing], i};
            }
            else {
                unset[nums[i]] = i;
            }
        } 
        return {};
    }
};
