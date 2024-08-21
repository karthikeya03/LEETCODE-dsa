class Solution {
public:
    char findTheDifference(string s, string t) {
        int suma = 0, sumb = 0;
        
        for (char ch : s)
            suma += ch;
        
        for (char ch : t)
            sumb += ch;
        
        return sumb - suma;
    }
};
