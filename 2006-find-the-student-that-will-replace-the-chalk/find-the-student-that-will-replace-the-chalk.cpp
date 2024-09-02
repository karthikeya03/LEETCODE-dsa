class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long total_chalk=0;
        for(int i=0;i<chalk.size();++i)
        {
             total_chalk=total_chalk+chalk[i];
        }
        k=k%total_chalk;
       for(int i=0; i<chalk.size(); ++i) {
            if (k<chalk[i]) {
                return i;
            }
            k -= chalk[i];
        }
        return 0;  
    }
};