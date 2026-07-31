class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> maps;
        for (int i=0; i < nums.size();i++) {
            if (maps.count(nums[i])) {
                maps[nums[i]]++;
                return true;
            }
            maps[nums[i]]=1;
        }
        return false;
    }
};