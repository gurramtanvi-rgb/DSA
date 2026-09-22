class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++){
            int left = i;
            int right = arr.size() - 1;

            while(left<right){
            
            if(arr[right] == arr[left] * 2 || arr[left]==arr[right] *2){
                return true;
            }
           
            right--;
        }
        }
        return false;
    }
};