class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        int ans = 0;
        unordered_map<int, int> hash;
        for(int x : nums){
            hash[x]++;
            if(hash[x]>n){
                ans = x;
                break;
            }
        }
        return ans;
    }
};