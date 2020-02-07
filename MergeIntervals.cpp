class Solution {
public:
    static bool sortcol( const vector<int>& v1, const vector<int>& v2 ) { 
         return v1[0] < v2[0]; 
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.size()==0)
            return ans;
        sort(intervals.begin(),intervals.end(),sortcol);
        int st = intervals[0][0],en=intervals[0][1];
        vector<int> T = {st,en};
        ans.push_back(T);
        for(int i = 1,j = 0;i<intervals.size();i++)
        {
            st = intervals[i][0];
            if(st<=en){
                en = max(en,intervals[i][1]);
                ans[j][1] = en;
                }
            else
            {
                j++;
                en = intervals[i][1];
                vector<int> T = {st,intervals[i][1]};
                ans.push_back(T);
            }
        }
        return ans;
    }
};
