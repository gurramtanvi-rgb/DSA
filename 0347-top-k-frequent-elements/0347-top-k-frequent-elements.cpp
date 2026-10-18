class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int n : nums) {
            mp[n]++;
        }

        vector<int> ans;

        while (k--) {
            int maxFreq = 0;
            int num = 0;

            for (auto p : mp) {
                if (p.second > maxFreq) {
                    maxFreq = p.second;
                    num = p.first;
                }
            }

            ans.push_back(num);
            mp.erase(num);
        }

        return ans;
    }
};