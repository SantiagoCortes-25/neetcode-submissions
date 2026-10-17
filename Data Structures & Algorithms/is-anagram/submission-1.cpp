class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> count;
        for (char c : s) count[c]++; //We want to increment the times a char is seen
        for (char c : t) count[c] --; //We subst so the value goes to 0

        for (auto& par : count){ // We want to check if every value is 0
            if (par.second != 0) return false;
        }
        return true;
    }
};
