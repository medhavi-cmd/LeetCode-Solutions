class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if(n>m){
            return false;
        }
        unordered_map<char, int> h1;
        unordered_map<char, int> h2;

        for (char c : s1){
            h1[c]++;
        }

        for(int i = 0; i<n; i++){
            h2[s2[i]]++;
        }
        if(h1==h2){
            return true;
        }

        int i = 0;
        int j = n;
        while(j<m){
            h2[s2[j]]++;

            h2[s2[i]]--;

            if(h2[s2[i]]==0){
                h2.erase(s2[i]);
            }
            if (h1==h2){
                return true;
            }
            i++;
            j++;
        }
        return false;
        }
        
    
};