class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.size();
        int left = 0;
        int right = n-1;
        int count =0;

        for(int i =0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = tolower(s[i]);
            }
        }

        while(left < right) {
            
            if(!isalnum(s[left])) {
                left++;
            }
            else if(!isalnum(s[right])) {
                right--;
            }
            else if(s[left] != s[right]) {
                return false;
            }
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};