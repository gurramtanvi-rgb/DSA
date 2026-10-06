class Solution {
public:
    string removeDuplicates(string s) {
        
        vector<char> st;
        int top = -1;

        for(int i = 0;i<s.size();i++){
           if(top!=-1){
           if(s[i]==st[top]){
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

        string t(st.begin(), st.end());

        return t;
    }
};