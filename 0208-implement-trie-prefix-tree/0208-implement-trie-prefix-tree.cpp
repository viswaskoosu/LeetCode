class Trie {
public:
    vector<string> v;
    Trie() {
    }
    
    void insert(string word) {
       v.push_back(word);
    }
    
    bool search(string word) {
        for(int i=0;i<v.size();++i){
            if(v[i]==word) return 1;
        }
        return 0;
    }
    
    bool startsWith(string prefix) {
        bool a=1;
        for(int i=0;i<v.size();++i){
            for(int k=0;k,prefix.length();++k){
                if(prefix[k]!=v[i][k]) break;
                if(k==prefix.length()-1) return 1;
            }
        }
        return 0;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */