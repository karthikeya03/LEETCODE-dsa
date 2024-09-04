class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> obs;
        for (auto& obstacle : obstacles) {
            obs.insert(to_string(obstacle[0]) + "," + to_string(obstacle[1]));
        }

        // Direction vectors: North, East, South, West
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        // Map for direction changes based on current direction and turn
        unordered_map<int, pair<int, int>> leftTurn = {{0, {-1, 0}}, {1, {0, 1}}, {2, {1, 0}}, {3, {0, -1}}};
        unordered_map<int, pair<int, int>> rightTurn = {{0, {1, 0}}, {1, {0, -1}}, {2, {-1, 0}}, {3, {0, 1}}};

        int dir = 0; // Start facing North
        int x = 0, y = 0;
        int ans = 0;

        for (int c : commands) {
            if (c == -1) { // Right turn
                dir = (dir + 1) % 4;
            } else if (c == -2) { // Left turn
                dir = (dir + 3) % 4;
            } else { // Move forward
                for (int i = 0; i < c; ++i) {
                    int nx = x + directions[dir].first;
                    int ny = y + directions[dir].second;
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
