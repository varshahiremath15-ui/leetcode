class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        temp=sorted((nums))
        d={}
        for i,val in enumerate(temp):
            if val not in d:
                d[val]=i
        res=[]
        for i in nums:
            res.append(d[i])
        return res
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        