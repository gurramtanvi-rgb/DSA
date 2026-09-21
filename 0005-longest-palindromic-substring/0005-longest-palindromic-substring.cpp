class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size();

        int maxLen = 0;
        int start = 0;

        for(int i = 0; i < n; i++) {

            // Odd length palindrome
            int left = i;
            int right = i;

            while(left >= 0 && right < n && s[left] == s[right]) {

                int str = right - left + 1;

                if(str > maxLen) {
                    maxLen = str;
                    start = left;
                }

                left--;
                right++;
            }


            // Even length palindrome
            left = i;
            right = i + 1;

            while(left >= 0 && right < n && s[left] == s[right]) {

                int str = right - left + 1;

                if(str > maxLen) {
                    maxLen = str;
                    start = left;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};