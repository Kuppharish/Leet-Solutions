class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int err = INT_MAX,sgn=1;
        for(int i = 0;i<n-2;i++){
            if(i==0||!(nums[i]==nums[i-1])){
                int lf = i+1, rt=n-1;
                int tmp;
                while(lf<rt){
                    if(nums[i]+nums[lf]+nums[rt]==target)
                        return target;
                    else {
                        tmp = abs(nums[i]+nums[lf]+nums[rt]-target);
                        err = min(err,tmp);
                        if(err == tmp)
                            sgn = (nums[i]+nums[lf]+nums[rt]-target)/tmp;
                    }
                    if(nums[i]+nums[lf]+nums[rt]<target)
                        lf++;
                    else
                        rt--;
                }
            }
        }
        return err*sgn+target;
    }
};
