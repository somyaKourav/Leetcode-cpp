class Solution {
public:
    bool isPathCrossing(string path) {
      unordered_set<string>st;
        int x = 0;
        int y = 0;
        string key = to_string(x) + "_" + to_string(y);
        st.insert(key);
        for(char &ch : path){
            if(ch == 'E'){
                x++;
            }
            else if(ch == 'W'){
                x--;
            }
            else if(ch == 'N'){
                y++;
            }
            else{
                y--;
            }
            key = to_string(x) + "_" + to_string(y);
            if(st.find(key) != st.end()){
                return true;
            }
            st.insert(key);
        }
        return false;
    }
};