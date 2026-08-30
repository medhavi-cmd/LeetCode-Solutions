class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j =0;
        int n = s.length();
        int m = t.length();
        while(i<n){
            if (s[i]== t[j]){
                i++;
                j++;
            }
            else if (s[i]!=t[j]  and j<m){
                j++;
            }
            else{
                return false;
            }
        }
        return true;

    }
};