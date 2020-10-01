class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        sum = 0
        prod = 1;
        while(n>0):
            r = n%10
            sum = sum+r
            prod = prod*r
            n/=10
        return prod-sum