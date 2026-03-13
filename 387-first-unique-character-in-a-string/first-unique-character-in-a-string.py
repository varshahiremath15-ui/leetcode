class Solution:
    def firstUniqChar(self, s: str) -> int:
         char_dict={}
         for ch in s:
            if ch in char_dict:
                char_dict[ch]+=1
            else:
                char_dict[ch] = 1
         for i in range(0,len(s)):
            if char_dict[s[i]] == 1:
                return i
         return -1


            
        
        
        