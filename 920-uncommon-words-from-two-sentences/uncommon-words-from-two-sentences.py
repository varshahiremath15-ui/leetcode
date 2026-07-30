class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        words=s1.split()+s2.split() 
        ans=[]
        freq={}
        for word in words:
            if word in freq:
                freq[word]+=1
            else:
                freq[word]=1
        for word in freq:
            if freq[word]==1:
                ans.append(word)
        return ans
        