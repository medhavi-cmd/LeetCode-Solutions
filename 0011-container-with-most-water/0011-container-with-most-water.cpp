class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int max_water = 0;
        while(l<r){
            int w = r-l;
            int h = min(height[l], height[r]);
            int ans = w*h;
            max_water = max(max_water, ans);

            if (height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }

        }
        return max_water;
    }
};