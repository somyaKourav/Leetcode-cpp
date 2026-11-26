class Solution {
public:
    static string str;
    static bool compare(char char1,char char2)
    {
        return (str.find(char1) < str.find(char2));
    }
    string customSortString(string order, string s)
     {
        str = order;
        sort(s.begin(),s.end(),compare);
        return s;
    }
};
string Solution::str;