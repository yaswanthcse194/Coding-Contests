class Solution {
public:
    int maxDistinct(string s) {
        int count=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]==1) count++;
        }
        return count;
    }
};