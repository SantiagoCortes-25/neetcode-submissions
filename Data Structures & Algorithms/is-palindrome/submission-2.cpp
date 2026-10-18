class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(),[](unsigned char c){
            return !isalnum(c);
        }), s.end());

        for(int i = 0; i < s.length()/2; i ++){ 
            if (tolower(s[i]) != tolower(s[s.length() - 1 - i])){
                return false;
            }
        }
        return true;
    }
};
