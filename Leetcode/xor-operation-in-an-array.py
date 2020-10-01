class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        nums = []
        for i in range(n):
            k = start + 2*i
           # nums[i] = start + k
            nums.append(k)
        out = 0
        for i in range(n):
            out = out ^ nums[i]
        return out