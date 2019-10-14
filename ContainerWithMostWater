class Solution {
public:
    int maxArea(vector<int>& height) {
        int M = INT_MIN;
        int n = height.size();
        for(int i = 0,j=n-1;i<j;){
            int m = min(height[i],height[j]);
            int area = m*(j-i);
            M = max(M,area);
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return M;
    }
};
