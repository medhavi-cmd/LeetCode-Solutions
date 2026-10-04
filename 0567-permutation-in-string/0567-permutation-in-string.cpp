class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n = s1.length();
       int m = s2.length();
       unordered_map<char, int> h1;
       unordered_map<char, int> h2;

        //  freq of s1
        for (char c : s1){
            h1[c]++;
        }  

        int i = 0;
        int j = 0;
        while(j<m){
            // add in window
            h2[s2[j]]++;

            // check for window size
            if (j-i+1 > n){
                h2[s2[i]]--;
                if(h2[s2[i]] == 0){
                    h2.erase(s2[i]);
                }
                i++;
            }
            if(j-i+1 ==n){
                if(h1==h2){
                    return true;
                }
            }
            j++;
        }
        return false;
    }
};