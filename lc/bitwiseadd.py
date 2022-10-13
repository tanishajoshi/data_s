#add 2 nums w/o using arithmetic + operator. - reduces time complexity
class Solution:
    def getSum(self, a: int, b: int) -> int:
        while b!=0:
            carry = a&b
            a = a^b
            b = carry << 1  #carry value shifted left by a bit
        return a
        
