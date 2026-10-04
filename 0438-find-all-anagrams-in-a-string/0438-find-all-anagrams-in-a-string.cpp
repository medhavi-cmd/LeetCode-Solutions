class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        // freq map of p
        for(char c : p){
            mp1[c]++;
        }

        int i = 0;
        int j = 0;
        int k = p.length();
        while(j<s.length()){
            //add elem
             mp2[s[j]]++; 
            //  check if window exceeds, remove if yes
            if(j-i+1 >k){
                mp2[s[i]]--;
                if(mp2[s[i]] == 0){
                    mp2.erase(s[i]);
                }
                i++;
            }
            if(j-i+1 == k){
                if(mp1==mp2){
                    ans.push_back(i);
                }
            }
            j++;
        }
        return ans;
        
    }
};