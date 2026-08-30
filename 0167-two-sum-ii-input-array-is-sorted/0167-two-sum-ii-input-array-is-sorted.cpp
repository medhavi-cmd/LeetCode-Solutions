class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        int j = n-1;
        int i1 = 0;
        int i2 = 0;
        while(i<j){
            if(numbers[i] + numbers[j] > target){
                j--;
            }
            else if(numbers[i] + numbers[j] < target){
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