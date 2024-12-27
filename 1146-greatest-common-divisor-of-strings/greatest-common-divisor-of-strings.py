class Solution(object):
    def gcdOfStrings(self, str1, str2):
        n=len(str1)
        m=len(str2)
        while str1!=str2: 
            if str1.startswith(str2):
                str1=str1[m:]
                n=len(str1)
            elif str2.startswith(str1):
                str2=str2[n:]
                m=len(str2)
            else:
                return ""
            
        return str1
       
