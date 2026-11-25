class Solution {
public:
    int expand(string s, int i,int j){
        int count = 0;
        while(i >= 0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
       int totalCount = 0;
       for(int i=0; i<s.length(); i++){
        int j = i;
        int oddkaAns = expand(s, i, j);
        j = i+1;
        int evenkaAns = expand(s,i,j);
        totalCount = totalCount + oddkaAns + evenkaAns ;
       } 
       return totalCount;
    }
};