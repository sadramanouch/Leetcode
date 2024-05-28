class BrowserHistory {
private: 
    vector<string> browse;
    int current; 
    int maxInd;
public:
    BrowserHistory(string homepage) {
        browse.push_back(homepage);
        current = 0;
        maxInd = 0;
    }
    
    void visit(string url) {
        current++;
        if (current < browse.size()){
            browse[current] = url;
        }
        else{
            browse.push_back(url);
        }
        maxInd = current;
    }
    
    string back(int steps) {
        current = max(0, current-steps);
        return browse[current];
    }
    
    string forward(int steps) {
        current = min(maxInd, current+steps);
        return browse[current];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */