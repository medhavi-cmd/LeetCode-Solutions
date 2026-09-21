class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
       int l = 0;
       int r = n-1;
       int maxWater = 0;
       while(l<r){
        int width = r-l;
        int water = min(height[l], height[r]) * width;
        maxWater = max(water, maxWater);
        if (height[l] < height[r]){
            l++;
        }
        else{
            r--;
        }
       }
       return maxWater;
    }
};