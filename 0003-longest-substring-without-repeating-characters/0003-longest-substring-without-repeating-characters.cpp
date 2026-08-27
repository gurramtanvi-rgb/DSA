class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> m;

        int left = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++) {

            if(m.find(s[right]) != m.end()) {
                left = max(left, m[s[right]] + 1);
            }

            m[s[right]] = right;

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};