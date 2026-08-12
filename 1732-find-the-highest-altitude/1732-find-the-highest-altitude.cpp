class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> arr;
        int sum =0;
        int highest=0;

        for(int i=0;i<n;i++){
            sum = sum + gain[i];
            arr.push_back(sum);
            highest = max(highest, sum);
        }
        
        return highest;
    }
};