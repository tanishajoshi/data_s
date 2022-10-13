class Solution:
    def hammingWeight(self, n: int) -> int:
        a = '{:032b}'.format(n)
        print(a)
        c = a.count('1')
        return c
