class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        int i;
        for(i=0;i<magazine.length();i++){
            arr[magazine[i]-97]++;
        }
        for(i=0;i<ransomNote.length();i++){
            if(arr[ransomNote[i]-97]>0) arr[ransomNote[i]-97]--;
            else return false;
        }
        return true;
    }
};