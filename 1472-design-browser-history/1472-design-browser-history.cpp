class BrowserHistory {
public:
    BrowserHistory(std::string homepage) {
        history.push_back(homepage); // Initialize with the homepage
        current = 0; // Current index in the history
        max_index = 0; // Max index in the history that we can forward to
    }
    
    void visit(std::string url) {
        // Move the current index forward
        current++;
        // If current is within the existing history size, overwrite the url at the current index
        // Otherwise, add the new url to the history
        if (current < history.size()) {
            history[current] = url;
        } else {
            history.push_back(url);
        }
        // Update the max index to the current index
        max_index = current;
    }
    
    std::string back(int steps) {
        // Move back by the given number of steps, ensuring we do not go below 0
        current = std::max(0, current - steps);
        return history[current];
    }
    
    std::string forward(int steps) {
        // Move forward by the given number of steps, ensuring we do not go beyond max_index
        current = std::min(max_index, current + steps);
        return history[current];
    }

private:
    std::vector<std::string> history; // Vector to store the browsing history
    int current; // Current index in the history
    int max_index; // Max index in the history that we can forward to
};