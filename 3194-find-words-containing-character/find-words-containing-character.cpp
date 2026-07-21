class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        int index=0;
        for(string word:words)
        {
            for(char ch:word)
            {
                if(ch==x){
                ans.push_back(index);
                break;}
            }
            index++;
        }
       return ans;  
    }
   
};