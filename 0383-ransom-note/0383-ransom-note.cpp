class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0;i<ransomNote.length();i++){
            int j=0;
            for(int k=0;k<magazine.length();k++){
                if(magazine[k]==ransomNote[i]){
                    magazine[k]='1';
                    j++;
                    break;
                }
            }
            if(j==0) return 0;
        }
        return 1;
    }
};