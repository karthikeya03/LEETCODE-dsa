class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int target = skill[0] + skill[n - 1];  
        long long result = 0;
        for (int i = 0; i < n / 2; ++i) {
            if (skill[i] + skill[n - 1 - i] != target) {
                return -1;
            }
            result += (long long)skill[i] * skill[n - 1 - i];
        }
        return result; 
    }
};
