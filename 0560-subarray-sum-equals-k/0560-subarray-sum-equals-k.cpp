class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int count = 0;
        int prefix = 0;
         mp[0] = 1;
        for(int i = 0; i<n; i++){
            prefix += nums[i];
            int needed = prefix - k;
            if(mp.find(needed) != mp.end()){
                count += mp[needed];
            }
            mp[prefix]++;
        }
        
        return count;
    }
};