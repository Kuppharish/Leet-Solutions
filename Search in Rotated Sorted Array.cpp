class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0){
            return -1;}
        else if(n==1){
            if(nums[0]==target)
                return 0;
            else
                return -1;
        }
        int x = nums[0];
        int ind = n-1;
        int l = 0, r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(mid<n-1){
            if(nums[mid+1]<nums[mid]){
                ind = mid+1;break;}}
            if(mid>0){
            if(nums[mid]<nums[mid-1]){
                ind = mid;break;}}
            if(nums[mid]>x)
                l = mid+1;
            else if(nums[mid]<=x)
                r = mid-1;
        }
        if(target>=x){
            int l =0, r =ind;
            while(l<=r)
            {
                int mid = (l+r)/2;
                if(nums[mid]==target)
                    return mid;
                else if(nums[mid]>target)
                    r = mid-1;
                else
                    l = mid+1;
            }
        }
        else if(target<x){
            int l =ind, r =n-1;
            while(l<=r)
            {
                int mid = (l+r)/2;
                if(nums[mid]==target)
                    return mid;
                else if(nums[mid]>target)
                    r = mid-1;
                else
                    l = mid+1;
            }
        }
        return -1;
    }
};
