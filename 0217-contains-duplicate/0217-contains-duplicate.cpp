class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n = nums.size();
       unordered_map<int, int> mp;
       for(int n : nums){
        mp[n]++;
       }
       for(auto pair : mp){
        if (pair.second >1){
            return true;
        }
       }
       return false;
    }
};