class Solution {
public:
   int longestConsecutive(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    unordered_set<int> sett(nums.begin(), nums.end());
    int i;
    int longest = 0;
    int start;
    for(auto num : sett){

        if(sett.count(num-1)==0){
            start = num;
            int length = 1;
            while(sett.count(start+length)){
                length++;
            }
            longest = max(longest,length);
        }
    }
    return longest;
    
   }
    
};