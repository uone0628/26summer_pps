class Solution:
    def nextGreaterElement(self, nums1: list[int], nums2: list[int]) -> list[int]:
        m = {}
        st = []
        for n in nums2:
            while st and st[-1] < n:
                m[st.pop()] = n
            st.append(n)
        return [m.get(n, -1) for n in nums1]