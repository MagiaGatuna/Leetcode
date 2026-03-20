class Solution:
    def isNumber(self, s: str) -> bool:
        pattern = r'[+-]?((\d+\.?\d*)|(\.\d+))([eE][+-]?\d+)?'
        return bool(re.fullmatch(pattern, s))