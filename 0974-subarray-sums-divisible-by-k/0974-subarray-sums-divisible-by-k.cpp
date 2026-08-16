class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int n = nums.size();

        int count = 0;

        vector<int> p(n);

        p[0] = nums[0];

        for(int i = 1; i < n; i++) {
            p[i] = p[i-1] + nums[i];
        }

        unordered_map<int,int> m;

        m[0] = 1;

        for(int j = 0; j < n; j++) {

            int rem = p[j] % k;

            if(rem < 0)
                rem += k;

            count += m[rem];

            m[rem]++;
        }

        return count;
    }
};