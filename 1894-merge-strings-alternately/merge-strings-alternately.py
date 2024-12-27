class Solution(object):
    def mergeAlternately(self, word1, word2):
        result=""
        n=len(word1)
        m=len(word2)
        siz=max(n,m)
        for i in range(siz):
            if i<n:
             result+=word1[i]
            if i<m:
             result+=word2[i]
             
        return result
        