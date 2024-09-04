class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> obs;
        for (auto& obstacle : obstacles) {
            obs.insert(to_string(obstacle[0]) + "," + to_string(obstacle[1]));
        }

        int x = 0, y = 0;
        int dx = 0, dy = 1; 
        int ans = 0;

        for (int c : commands) 
        {
            if (c == -1)
             { 
                int temp = dx;
                dx = dy;
                dy = -temp;
            } else if (c == -2)
             { 
                int temp = dx;
                dx = -dy;
                dy = temp;
            } else 
            { 
                for (int i = 0; i < c; ++i) 
                {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (obs.find(to_string(nx) + "," + to_string(ny)) != obs.end()) 
                    {
                        break; 
                    }
                    x = nx;
                    y = ny;
                    ans = max(ans, x * x + y * y); 
                }
            }
        }
        return ans;
    }
};
