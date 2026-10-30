class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.length();
        char maxchar =' ';
        for(int i=2; i<n; i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                maxchar = max(maxchar,num[i]);
            }
        }
        if(maxchar==' '){
            return "";
        }
        return string(3,maxchar);
    }
};