class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int count = 0;

        vector<int> p(n);

        p[0] = nums[0];

        for(int i = 1; i < n; i++) {
            p[i] = p[i-1] + nums[i];
        }

        unordered_map<int, int> m;

        // prefix sum 0 has occurred once
        m[0] = 1;

        for(int j = 0; j < n; j++) {

            int val = p[j] - k;

            if(m.find(val) != m.end()) {
                count += m[val];
            }

            // store current prefix sum
            m[p[j]]++;
        }

        return count;
    }
};