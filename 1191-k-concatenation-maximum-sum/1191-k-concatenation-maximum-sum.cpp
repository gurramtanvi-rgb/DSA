class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int n = arr.size();
        long long sum =0;
        long long ans =0;
        long long max_sum=0;
        long long current_sum=0;

        for(int i=0;i<n;i++){
            sum = sum+arr[i];
        }
        
        for(int i=0;i<n;i++){
            current_sum = current_sum + arr[i];
            max_sum = max(current_sum,max_sum);

            if(current_sum<0){
                current_sum =0;
            }
        }

        if(k==1){
            return max_sum;
        }

        long long prefix =0;
        long long prefix_sum =0;

        for(int i=0;i<n;i++){
            prefix_sum=prefix_sum+arr[i];
            prefix = max(prefix_sum,prefix);
        }

        long long suffix =0;
        long long suffix_sum =0;

        for(int i=n-1;i>=0;i--){
            suffix_sum=suffix_sum+arr[i];
            suffix = max(suffix_sum,suffix);
        }

        if(sum>0){
            ans = suffix+prefix+(k-2)*sum;
        }
        else{
             ans = prefix+suffix;
        }
        ans = max(ans,max_sum);
        
         return ans % 1000000007;
    }
};