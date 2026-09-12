class Solution {
public:
     int lengthOfLongestSubstring(string s) {
        unordered_set<char> stringSet = {};
        int left = 0;
        int maxSize = 0;
        for(int right = 0; right<s.size(); right++){
            while(stringSet.count(s[right])){
                
                stringSet.erase(s[left]);
                left += 1;
            }
           
            stringSet.insert(s[right]);
            maxSize = max(maxSize, (int)stringSet.size());
            
        }
        return maxSize;
    }
};
