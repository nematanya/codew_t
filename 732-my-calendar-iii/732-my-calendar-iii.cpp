class MyCalendarThree {
    map<int, int> times;
public:
    int book(int s, int e) {
        times[s]++; 
        times[e]--; 
        int n = 0, ans = 0;
        for (pair<int, int> x : times)
            ans = max(ans, n += x.second);
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */