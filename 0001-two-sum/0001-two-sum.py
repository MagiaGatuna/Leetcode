class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result=list()
        nums2=nums.copy()
        for indice1,element1 in enumerate(nums):
            for indice2,element2 in enumerate(nums2):
                if indice1==indice2:
                    continue
                if element1+element2==target:
                    result.append(indice1)
                    result.append(indice2)
                    return result
                    