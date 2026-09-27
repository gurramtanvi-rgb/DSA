class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        int ans;
        
        while(left<=right){

            int mid = left + (right-left)/2;

            int count = check(weights,mid);

            if(count <= days){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }

    int check(vector<int>& weights, int mid){ 
    int count = 1;              
    int k = 0; 
    int sum = 0; 
 
    while(k < weights.size()){ 
        
        if(sum + weights[k] > mid){    
            count++; 
            sum = 0; 
        }

        sum = sum + weights[k]; 
        k++; 
    } 

    return count; 
}
    
};