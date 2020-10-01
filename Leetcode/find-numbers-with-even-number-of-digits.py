class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        out = 0
        for i in range(len(nums)):
            inn = 0
            k = nums[i]
            while(k>0):
                inn+=1
                k//=10
            if(inn%2==0):
                out+=1
        return out