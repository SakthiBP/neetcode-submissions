class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set <int> maps;
        for(int num: nums) {
            if(maps.find(num)!=maps.end()) {
                return true;
            }
            else {
                maps.insert(num);
            }
        
        }
        return false;
        
    }
};