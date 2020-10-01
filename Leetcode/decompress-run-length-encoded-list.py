class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        list1 = []
        for i in range(len(nums)//2):
            [freq,val] = [nums[2*i],nums[2*i+1]]
            list2 = [val]*freq
            list1.extend(list2)
        return list1