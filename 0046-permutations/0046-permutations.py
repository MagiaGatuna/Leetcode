class Solution:
    import itertools
    def permute(self, nums: List[int]) -> List[List[int]]:
        permutaciones = itertools.permutations(nums)
        return list(permutaciones)
