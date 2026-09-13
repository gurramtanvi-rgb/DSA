class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();

        int right = n-1;
        int left = 0;

        while(left<right){
            int temp;
            temp = s[right];
            s[right]=s[left];
            s[left]=temp;

            right--;
            left++;
        }

    }
};