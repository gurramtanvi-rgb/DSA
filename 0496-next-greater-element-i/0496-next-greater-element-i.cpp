class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> res;
        unordered_map<int, int> mp;
        vector<int> arr;
        int top = -1;

        for(int i = nums2.size() - 1; i >= 0; i--) {

            while(top != -1 && arr[top] <= nums2[i]) {
                top--;
                arr.pop_back();
            }

            if(top == -1) {
                mp[nums2[i]] = -1;
            }
            else {
                mp[nums2[i]] = arr[top];
            }

            top++;
            arr.push_back(nums2[i]);
        }

        for(int i = 0; i < nums1.size(); i++) {
            res.push_back(mp[nums1[i]]);
        }

        return res;
    }
};