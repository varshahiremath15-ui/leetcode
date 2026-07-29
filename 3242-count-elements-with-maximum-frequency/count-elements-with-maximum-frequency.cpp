class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int num:nums){
            map[num]++;
        }
        int maxfreq=0;
        for(auto i:map){
            maxfreq=max(maxfreq,i.second);
        }
         int ans=0;
        for(auto i:map){
           
            if(i.second==maxfreq){
                    ans+=i.second;
            }
        }
       return ans; 
    }
};