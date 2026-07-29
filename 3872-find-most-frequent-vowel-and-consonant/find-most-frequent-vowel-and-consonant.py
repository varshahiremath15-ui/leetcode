class Solution:
    def maxFreqSum(self, s: str) -> int:
        freq={}
        for ch in s:
            if ch in freq:
                freq[ch]+=1 
            else:
                freq[ch]=1 
        vowels='aeiou'
        maxvowel=0
        maxconsonant=0 
        for ch in freq:
            if ch in vowels:
                if freq[ch]>maxvowel:
                    maxvowel=freq[ch]
            else:
                if freq[ch]>maxconsonant:
                    maxconsonant=freq[ch]
        return maxvowel+maxconsonant;
       
        