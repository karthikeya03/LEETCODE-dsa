class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int, int>> obs;
        for (auto& obstacle : obstacles) {
            obs.insert({obstacle[0], obstacle[1]});
        }

        int x = 0, y = 0;
        int dx = 0, dy = 1; // Initial direction is "up" (North)
        int ans = 0;

        for (int c : commands) {
            if (c == -1) { // Right turn
                int temp = dx;
                dx = dy;
                dy = -temp;
            } else if (c == -2) { // Left turn
                int temp = dx;
                dx = -dy;
                dy = temp;
            } else { // Move forward
                for (int i = 0; i < c; ++i) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (obs.find({nx, ny}) != obs.end()) {
                        break; // Stop if there's an obstacle
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
