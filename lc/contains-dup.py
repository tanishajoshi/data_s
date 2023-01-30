class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        for i in nums:
            if (nums.count(i)>1):
                print(nums[i])
                return("true")
        return("false")

inputs = [1,2,3,4,5,6,7,7]
ob1 = Solution()
print(ob1.containsDuplicate(inputs))


