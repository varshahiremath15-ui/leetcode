class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        int len=word.length();
        for(int i=0;i<len;i++){
            if(i<8)ans+=1;
            else if(i<16)ans+=2;
            else if(i<24) ans+=3;
            else ans+=4;

        }
        
        return ans;
        
    }
};