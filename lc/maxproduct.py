class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        currmax = nums[0]
        currmin = nums[0]
        prod = currmax
        if len(nums) ==1:
            return nums[0]
        for i in range(1, len(nums)):
            curr = nums[i]
            tmpmax = max(curr,currmax*curr,currmin*curr)
            currmin = min(curr,currmax*curr,currmin*curr)
            currmax= tmpmax
            
            prod= max(currmax, prod)
        
        return prod 
