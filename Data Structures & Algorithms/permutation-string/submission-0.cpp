class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }
        unordered_map<char, int> s1Count;
        unordered_map<char, int> s2Count;

        for(int i = 0; i < s1.size(); i++){
            s1Count[s1[i]]++;
            s2Count[s2[i]]++;
        }
        if(s1Count == s2Count){
            return true;
        }
        for(int r = s1.size(); r < s2.size(); r++){
            s2Count[s2[r]]++;
            int l = r - s1.size();
            s2Count[s2[l]]--;
            if(s2Count[s2[l]] == 0){
                s2Count.erase(s2[l]);
            }

            if(s2Count == s1Count){
                return true;
            }
        }
        return false;


    }
};
