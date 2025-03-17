class Solution {
public:
    bool areNumbersAscending(string s) {
        for (char &c:s) {
            if (!isdigit(c) && c!=' ') {
                c=' ';  
            }
        }

        istringstream iss(s);
        string num;
        vector<int>vec;

        while(iss>>num) { 
            vec.push_back(stoi(num)); 
        }

        for(int i=0;i<vec.size()-1;++i)
        {
            if(vec[i]>=vec[i+1])
            return false;
        }
        return true;

    }
};