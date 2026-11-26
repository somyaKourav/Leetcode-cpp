class Solution {
public:
    void createUpdateMapping(string& str){
        char start = 'a';
        char mapping[300]={0};
        for(auto ch: str){
            if(mapping[ch] == 0){
                mapping[ch] = start ;
                start++;
            }
        }
        for(int i=0; i<str.length(); i++){
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        createUpdateMapping(pattern);
        for(string s: words){
            string tempString = s;
            createUpdateMapping(tempString);
            if(tempString == pattern){
                ans.push_back(s);
            }
        }
        return ans;
    }
};