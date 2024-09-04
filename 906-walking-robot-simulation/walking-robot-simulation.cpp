class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> obs;
        for (auto& obstacle : obstacles) {
            obs.insert(to_string(obstacle[0]) + "," + to_string(obstacle[1]));
        }

        vector<int> dx = {0, 1, 0, -1}; // North, East, South, West
        vector<int> dy = {1, 0, -1, 0};
        int dir = 0; // Start facing North
        int x = 0, y = 0;
        int ans = 0;

        for (int c : commands) {
            if (c == -1) { // Right turn
                dir = (dir + 1) & 3; // Equivalent to (dir + 1) % 4
            } else if (c == -2) { // Left turn
                dir = (dir + 3) & 3; // Equivalent to (dir + 3) % 4
            } else { // Move forward
                for (int i = 0; i < c; ++i) {
                    int nx = x + dx[dir];
                    int ny = y + dy[dir];
                    if (obs.find(to_string(nx) + "," + to_string(ny)) != obs.end()) {
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
