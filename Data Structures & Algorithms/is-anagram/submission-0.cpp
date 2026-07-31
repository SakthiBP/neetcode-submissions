class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>letter1;
        unordered_map<char,int>letter2;

        for (char z : s) {
            if (letter1[z]) {
                letter1[z]++;
            } else {
                letter1[z] = 1;
            }
        }
        for (char y : t) {
            if (letter2[y]) {
                letter2[y]++;
            } else {
                letter2[y] = 1;
            }
        }
        if (letter1 == letter2){
            return true;
        }
        return false;
    }
};
