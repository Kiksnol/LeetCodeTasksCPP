// Здесь очень хуевое решение в лоб. можно лучше

class RecentCounter {
public:
    vector<int> pingTimings;
    RecentCounter() {
    }
    
    int ping(int t) {
        pingTimings.push_back(t);

        int i = 0;
        for (; i < pingTimings.size(); ++i)
            if (pingTimings[i] >= t - 3000)
                break;

        return pingTimings.size() - i;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */


/// ------------------------------------------- Хорошее решение:
class RecentCounter {
private:
    std::vector<int> records;
    int start;

public:
    RecentCounter() : start(0) {}

    int ping(int t) {
        records.push_back(t);
        while (records[start] < t - 3000) {
            start++;
        }
        return records.size() - start;
    }
};
