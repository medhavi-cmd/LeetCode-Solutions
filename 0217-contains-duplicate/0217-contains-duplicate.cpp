class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map <int, int> hash;
        for(int x : nums){
            hash[x]++;
            if(hash[x]>1){
                return true;
            }
        }
        return false;
        
        
    }
};