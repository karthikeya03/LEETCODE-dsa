class MyCalendar {
    vector<pair<int, int>> bookings;
public:
    MyCalendar() {}

    bool book(int start, int end) {
        for (auto& b : bookings) {
            if (max(b.first, start) < min(b.second, end)) {
                return false;
            }
        }
        bookings.push_back({start, end});
        return true;
    }
};
