class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map <int, int> freqmap;

        for(int i = 0; i < nums.size(); i++) {
            freqmap[nums[i]]++;
        }

        std::vector<std::pair<int, int>> freq_pair;
        for(auto& entry: freqmap) {
            freq_pair.push_back(entry);
        }
        std::sort(freq_pair.begin(), freq_pair.end(), [](const auto& a, const auto&b) {
            return a.second > b.second;
        });
        std::vector<int> result;
        for(int j = 0; j < k; j++) {
            result.push_back(freq_pair[j].first);
        }
        return result;
    }
};
