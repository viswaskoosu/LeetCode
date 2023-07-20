class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> map;
        int i;
        for(i=0;i<magazine.length();i++){
            map[magazine[i]]++;
        }
        for(i=0;i<ransomNote.length();i++){
            if(map[ransomNote[i]]>0) map[ransomNote[i]]--;
            else return false;
        }
        return true;
    }
};