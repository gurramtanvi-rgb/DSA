class Solution {
public:
    string makeGood(string s) {
        
        int top = -1;

        vector<char> st;

    for(int i=0;i<s.size();i++){

        if(top!=-1){
           if(tolower(s[i])==tolower(st[top]) && s[i] != st[top]){
            top--;
            st.pop_back();
           }
           else{
            st.push_back(s[i]);
            top++;
           }
        }

        else{
            st.push_back(s[i]);
            top++;
        }
    }
    string ans(st.begin(),st.end());
    return ans;
    }
};