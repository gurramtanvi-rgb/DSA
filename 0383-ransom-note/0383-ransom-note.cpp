class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int j =0;
        int count =0;
    while(j<ransomNote.size()){
        for(int i = 0;i<magazine.size();i++){
            
            if(ransomNote[j]==magazine[i]){
                 count++;
                 magazine.erase(i,1);
                 break;
            }
        }
        j++;
}
if(count==ransomNote.size()){
    return true;
}
return false;
    }
};