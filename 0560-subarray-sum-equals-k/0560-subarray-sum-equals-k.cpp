class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        mp[0] = 1;
        int prefix = 0;
        int cnt = 0;
        for(int x : nums){
           prefix += x;
           int needed_sum = prefix - k;
           if (mp.find(needed_sum) != mp.end()){
            cnt += mp[needed_sum];
           }
           mp[prefix]++;
        }
        return cnt;
    }
};