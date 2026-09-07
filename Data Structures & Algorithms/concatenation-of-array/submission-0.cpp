class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res(2*nums.size());
        for(int i=0; i<nums.size(); i++){
            int j = nums[i];
            res[i] = res[i+nums.size()] = j;
        }
        return res;
    }
};