class Solution:
    def findGCD(self, nums):
        mn=min(nums)
        mx=max(nums);
        return gcd(mn,mx)
        