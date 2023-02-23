class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
       // Create pairs of (capital, profit) for each project
    vector<pair<int, int>> projects;
    for (int i = 0; i < profits.size(); i++) {
        projects.push_back(make_pair(capital[i], profits[i]));
    }

    // Sort projects by capital requirement
    sort(projects.begin(), projects.end());

    // Create a priority queue to store projects with highest profits
    priority_queue<int> maxHeap;

    int availableCapital = w;
    int i = 0;
    while (k > 0) {
        // Add projects that can be started with available capital to the max heap
        while (i < projects.size() && projects[i].first <= availableCapital) {
            maxHeap.push(projects[i].second);
            i++;
        }

        // Exit if no more projects can be started
        if (maxHeap.empty()) {
            break;
        }

        // Select project with highest profit from max heap and add its profit to available capital
        int maxProfit = maxHeap.top();
        maxHeap.pop();
        availableCapital += maxProfit;

        k--;
    }

    return availableCapital;
    }
    
};