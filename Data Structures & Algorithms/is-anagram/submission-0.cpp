class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> s1;
        unordered_map<char, int> s2;

        for(auto i : s){
            if(s1.count(i)){
                s1[i]+=1;
            }
            else{
                s1[i]=1;
            }
        }
        for(auto i : t){
            if(s2.count(i)){
                s2[i]+=1;
            }
            else{
                s2[i]=1;
            }
        }
        if(s1==s2){
            return true;
        }
        else{
            return false;
        }


        
    }
};
