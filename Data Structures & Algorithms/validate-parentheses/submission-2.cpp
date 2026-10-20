class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> pareja = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c : s){
            if(pareja.count(c)){ // Preguntas si es de cierre
                if(st.empty() || st.top() != pareja[c]){
                    return false;
                }
                st.pop();
            } else{
                st.push(c); // it's a opening and push it to stack
            }
        }
        return st.empty(); // si esta vacio true, si no false
    }
};
