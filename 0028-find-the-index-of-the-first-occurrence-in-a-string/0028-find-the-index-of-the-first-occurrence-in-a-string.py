class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        haystack= haystack.replace(needle,'*')
        if '*' in haystack:
            return haystack.index('*')
        return -1         