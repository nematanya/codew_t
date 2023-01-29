class LFUCache {
    int cap, minf = 0;
    unordered_map<int, pair<int, list<pair<int, int>>::iterator>> m;
    unordered_map<int, list<pair<int, int>>> cache;
public:
    LFUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if (m.find(key) == m.end())
            return -1;
        auto& [freq, it] = m[key];
        cache[freq+1].splice(cache[freq+1].begin(), cache[freq], it);
        freq++;
        it = cache[freq].begin();
        if (cache[minf].empty())
            minf++;
        return it->second;
    }
    
    void put(int key, int value) {
        if (!cap)
            return;
        if (m.find(key) == m.end()) {
            if (size(m) == cap) {
                m.erase(cache[minf].back().first);
                cache[minf].pop_back();
            }
            cache[1].push_front({key, value});
            m[key] = {1, cache[1].begin()};
            minf = 1;
        } else {
            auto& [freq, it] = m[key];
            it->second = value;
            cache[freq+1].splice(cache[freq+1].begin(), cache[freq], it);
            freq++;
            it = cache[freq].begin();
            if (cache[minf].empty())
                minf++;
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */