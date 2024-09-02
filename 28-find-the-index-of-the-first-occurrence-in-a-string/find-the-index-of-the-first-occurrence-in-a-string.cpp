class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.empty()) {
            return 0;  
        }
        size_t index = haystack.find(needle);  
        return (index != std::string::npos) ? index : -1; 
    }
};