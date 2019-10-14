class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
            return findMedianSortedArrays(nums2,nums1);
        int n1 = nums1.size(), n2 = nums2.size(); 
        int med = 0;
        int start = 0, end = n1;
        while(start<=end){
            int p1 = (start+end)*0.5;
            int p2 = (n1+n2+1)*0.5-p1;
            int x1 = p1!=0?nums1[p1-1]:INT_MIN;
            int x2 = p1!=n1?nums1[p1]:INT_MAX;
            int y1 = p2!=0?nums2[p2-1]:INT_MIN;
            int y2 = p2!=n2?nums2[p2]:INT_MAX;
            if(x1<=y2&&y1<=x2){
                if((n1+n2)%2==0)
                    return (max(x1,y1)+min(x2,y2))*0.5;
                else
                    return max(x1,y1);
            }
            else if(x1>y2)
                end = p1-1;
            else
                start = p1+1;
        }
        return med;
    }
};
