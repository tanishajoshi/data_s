class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        l = len(nums)
        res = 0
        for i in range(0,l+1):
            if i not in nums:
                res = i
                break
            else:
                continue
                
        return res
