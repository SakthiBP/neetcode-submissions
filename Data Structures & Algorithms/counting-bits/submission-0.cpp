class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i = 0; i <= n; i++) {
            int x{i};
            int counter{};
            while(x>0) {
                x = x & (x-1);
                counter++;
            }
            result.push_back(counter);
        }

        return result;
        
    }
};
