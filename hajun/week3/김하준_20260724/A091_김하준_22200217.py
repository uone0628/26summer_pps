class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        idx = 0
        for n in nums:
            if n != val:
                nums[idx] = n
                idx += 1
        return idx