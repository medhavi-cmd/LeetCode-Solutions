class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map <int, int> mp;
        int n = nums.size();
        int maxlen = 0;
        int prefix = 0;
        mp[0] = -1;
        for (int i = 0; i<n; i++){
            if (nums[i]==0){
                prefix -=1;
            }
            else{
                prefix +=1;
            }
            if(mp.find(prefix)!= mp.end()){
                int length = i - mp[prefix];
                maxlen = max(length, maxlen);
            }
            else{
                mp[prefix] = i;
            }
        }
        return maxlen;
    }
};