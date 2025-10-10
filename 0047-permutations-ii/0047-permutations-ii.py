class Solution:
    import itertools
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        permutaciones = itertools.permutations(nums)
        return list(set(permutaciones))