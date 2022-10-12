#Kadane's Algorithm - 
class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        best_sum = float('-inf') # takes care of all neg array case
        curr_sum = 0
        for x in nums:
            curr_sum = max(x, curr_sum+x)
            best_sum = max(best_sum,curr_sum)
            
        return best_sum
        
