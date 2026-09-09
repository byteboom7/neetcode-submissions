class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int i = 0; i<nums.size(); i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int target = -nums[i];
            int left = i+1;
            int right = nums.size() - 1;
            while(left<right){
                if(nums[left] + nums[right] == target){
                    res.push_back({nums[left], nums[right], nums[i]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
                else if(nums[left] + nums[right] > target){
                    right--;
                }
                else if(nums[left] + nums[right] < target){
                    left++;
                }
            }
        }
        return res;
    }
};
