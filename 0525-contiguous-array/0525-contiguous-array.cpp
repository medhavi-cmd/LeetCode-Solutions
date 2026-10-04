class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n = nums.size();
       unordered_map<int, int> mp;
       int prefix = 0;
       int max_len = 0;
       mp[0] = -1;
       for(int i = 0; i<n; i++){
        if(nums[i]==0){
            prefix -=1;
        }
        else{
            prefix +=1;
        }
        if(mp.find(prefix) != mp.end()){
            int length = i - mp[prefix];
            max_len = max(length, max_len);
        }
        else{
            mp[prefix] = i;
        }
       }
       return max_len;
    }
};