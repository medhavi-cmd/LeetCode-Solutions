class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n = nums.size();
     int i1 = 0;
     int i2 = 0;
     int i = 0;
     int j = n-1;
     while(i<=j){
        if (nums[i] + nums[j] > target){
            j--;
        }
        else if(nums[i] + nums[j] < target){
            i++;
        }
        else{
            i1 = i+1;
            i2 = j+1;
            break;
        }
     }
     return {i1, i2};
    }
};