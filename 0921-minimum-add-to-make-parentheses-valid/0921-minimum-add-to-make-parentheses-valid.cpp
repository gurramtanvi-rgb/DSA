class Solution {
public:
    int minAddToMakeValid(string s) {
        
      int top = -1;

       vector<char> st;

       for(int i =0;i<s.size();i++){
           
        if(!st.empty()){   
           if(s[i] == '(' || s[i]=='{' || s[i]=='['){
              st.push_back(s[i]);
              top++;
           }
           else if((st[top] == '(' && s[i] == ')') || 
           (st[top] == '{' && s[i] == '}') || 
           (st[top] == '[' && s[i] == ']')){
              st.pop_back();
              top--;
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

       return st.size();
    }
};