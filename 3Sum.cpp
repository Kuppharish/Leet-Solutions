class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> V;
        for(int i = 0;i<n-2;i++){
            if(i==0||!(nums[i]==nums[i-1])){
                int lf = i+1, rt=n-1;
                while(lf<rt){
                    if(nums[i]+nums[lf]+nums[rt]==0){
                        vector<int> T;
                        T = {nums[i],nums[lf],nums[rt]};
                        V.push_back(T);
                        while(nums[lf+1]==nums[lf]&&lf<n-1){
                            lf++;
                            if(lf>=n-1)
                                break;
                        }
                        while(nums[rt-1]==nums[rt]&&rt>1){
                            rt--;
                            if(rt<=1)
                                break;
                        }
                        lf++;rt--;
                    }
                    else if(nums[i]+nums[lf]+nums[rt]<0)
                        lf++;
                    else
                        rt--;
                }
            }
        }
        return V;
    }
};
