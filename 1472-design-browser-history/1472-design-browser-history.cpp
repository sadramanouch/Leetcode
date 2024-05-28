class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage); // Initialize with the homepage
        current = 0; // Current index in the history
        max_index = 0; // Max index in the history that we can forward to
    }
    
    void visit(string url) {
        current++;
        if (current < history.size()) {
            history[current] = url;
        } 
        else {
            history.push_back(url);
        }
        max_index = current;
    }
    
    string back(int steps) {
        current = max(0, current - steps);
        return history[current];
    }
    
    string forward(int steps) {
        current = min(max_index, current + steps);
        return history[current];
    }

private:
    vector<string> history; // Vector to store the browsing history
    int current; // Current index in the history
    int max_index; // Max index in the history that we can forward to
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */