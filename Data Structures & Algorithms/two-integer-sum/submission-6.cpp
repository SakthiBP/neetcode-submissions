class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map <int, int> seen;
        int missing;
        for (int i = 0; i < nums.size(); i++) {
            missing = target - nums[i];

            if(seen.find(missing) != seen.end()) {
                return {seen[missing], i};
            }
            else {
                seen[nums[i]] = i;
            }
        }
        return {};
        
    }
};
