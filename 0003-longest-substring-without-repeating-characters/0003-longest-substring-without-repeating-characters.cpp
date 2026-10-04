class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int n = s.length();
        int max_len = 0;
        unordered_map<char, int> mp;
        while(j<n){
            mp[s[j]]++;

            while(mp[s[j]]>1){
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            }
            int length = j-i+1;
            max_len = max(length, max_len);
            j++;
        }
        return max_len;
    }
};