class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map <string, vector<string>> groups;

        for(int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            std::sort(temp.begin(), temp.end());
            groups[temp].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for (auto& item: groups) {
            result.push_back(item.second);
        }

        return result;
    }
};
