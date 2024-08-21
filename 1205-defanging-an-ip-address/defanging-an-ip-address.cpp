class Solution {
public:
    string defangIPaddr(string address) {
        string defanged;
        for(char c : address)
        {
            if(c=='.')
            defanged = defanged + "[.]";
            else
            defanged = defanged + c;
        }
        return defanged;
    }
};