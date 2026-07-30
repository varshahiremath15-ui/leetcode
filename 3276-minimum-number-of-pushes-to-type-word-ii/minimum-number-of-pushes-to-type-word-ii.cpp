class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>map;
        for(auto ch:word)
        {
            map[ch]++;//{a:2,d:1,c:1,d:1,e:1}
        }
        vector<int>freq;
        for(auto it:map)
        {
            freq.push_back(it.second);//[1,1,1,1]
        }
        sort(freq.begin(), freq.end(), greater<int>());
        int ans=0;
        int len=freq.size();
        for(int i=0;i<len;i++)
        {
            if(i<8)ans+=freq[i]*1;
            else if(i<16)ans+=freq[i]*2;
            else if(i<24)ans+=freq[i]*3;
            else ans+=freq[i]*4;
        }
        return ans;

        
    }
};