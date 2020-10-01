class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        k = len(indices)
        out = [0]*k
        for i in range(k):
            out[indices[i]] = s[i];
        str1 = ""
        # for ele in out:
        #     str1 + = ele
        str1 = str1.join(out)
        return str1