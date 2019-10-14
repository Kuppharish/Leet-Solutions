class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set <pair<int,int>> S;
        for(int i = 0; i<nums.size(); i++){
            int com = target-nums[i];
            if(S.find(com))
                return vector<int> V.push_back({i,})
        }
    }
};
