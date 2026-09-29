class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int count = 0;
        int n = grid[0].size();

        for(int i =0;i<grid.size();i++){

            int left = 0;
            int right = n-1;
            int ans = n;

            while(left<=right){

                int mid = left + (right-left)/2;
                
                if(grid[i][mid]>=0){
                    left = mid+1;
                }
                else{
                    ans = mid;
                    right = mid-1;
                }
            }
            count += n - ans;
        }
        return count;
    }
};