class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>map;
        for(char ch:s)
        {
            map[ch]++;
        }
        int mv=0,mc=0;
        for(auto ch:map)
        {
            char che=ch.first;
            if(che=='a'||che=='e'||che=='i'||che=='o'||che=='u')
            {
                mv=max(mv,ch.second);
            }
            else{
                mc=max(mc,ch.second);
            }
        }
        return mv+mc;
        
        
    }
};