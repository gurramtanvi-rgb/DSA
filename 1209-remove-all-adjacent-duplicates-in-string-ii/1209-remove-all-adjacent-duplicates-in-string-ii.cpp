class Solution {
public:
    string removeDuplicates(string s, int k) {
        // CHANGE 1: Handle k = 1 edge case immediately
        if (k == 1) return ""; 

        vector<char> st1;
        vector<int> st2;
        
        for(char c : s) {
            if(!st1.empty() && st1.back() == c) {
                st2.back()++;
                if(st2.back() == k) {
                    st1.pop_back();
                    st2.pop_back();
                }
            } else {
                st1.push_back(c);
                st2.push_back(1);
            }
        }
        
        // CHANGE 2: Reconstruct the final string accurately based on the accumulated counts
        string result = "";
        for(int i = 0; i < st1.size(); i++) {
            result.append(st2[i], st1[i]);
        }
        return result;
    }
};

