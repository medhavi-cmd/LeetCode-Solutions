class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hash;
        int flag = false;
        
        for(int i = 0; i<n; i++){
            hash[nums[i]]+=1;
            if (hash[nums[i]]>=2){
                return true;
            }
        }
        return false;
        
        
    }
};