class LUPrefix {
public:
    vector<int> videos;
    int longestIs = 0;
    int size;
    LUPrefix(int n) {
        for(int i = 0; i < n+1 ;i++)
            videos.push_back(0);
        size = n;
    }
    
    void upload(int video) {
        videos[video] = 1;
        if(video == 1){
            while(video <= size  and videos[video] == 1){
                longestIs++;
                video++;
            }
        }
        else if(longestIs == video-1){
            longestIs++;
            while(video < size and videos[video+1] == 1){
                longestIs++;
                video++;
            }
        }
    }
    
    int longest() {
        return longestIs;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */