class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector <int> leftMax(n,1);
        vector <int> rightMax(n,1);
        int total = 0;
        // cal leftmax
        leftMax[0] = height[0];
        for(int i = 1; i<n; i++){
            leftMax[i] = max(leftMax[i-1], height[i]);
        }
        // calc right max
        rightMax[n-1] = height[n-1];
        for(int i = n-2; i>=0; i--){
            rightMax[i] = max(rightMax[i+1], height[i]);
        }
        // calc water and add in total water
        for(int i = 0; i<n; i++){
            int water = min(leftMax[i], rightMax[i]) - height[i];
            total +=water;
        }
        return total;
    }
};  