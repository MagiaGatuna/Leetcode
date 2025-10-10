class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        numbers = {
            '2':{'a','b','c'},
            '3':{'d','e','f'},
            '4':{'g','h','i'},
            '5':{'j','k','l'},
            '6':{'m','n','o'},
            '7':{'p','q','r','s'},
            '8':{'t','u','v'},
            '9':{'w','x','y','z'},
        }
        result=list()
        if digits=="":
            return result
        else:
            def backtracking(index, s):
                if index == len(digits):
                    result.append(s)
                    return
                digit = digits[index]
                letters = numbers[digit]
            
                for letter in letters:
                    backtracking(index + 1, s + letter)
                
            backtracking(0, "")
            return result