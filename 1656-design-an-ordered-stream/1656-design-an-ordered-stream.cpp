#include <vector>
#include <string>
using namespace std;

class OrderedStream {
private:
    vector<string> stream;
    int ptr;
public:
    OrderedStream(int n) {
        stream.resize(n);
        ptr = 0;
    }
    
    vector<string> insert(int idKey, string value) {
        // Insert the value at the corresponding index
        stream[idKey - 1] = value;
        
        // Find the longest sequence of non-null values starting from ptr
        vector<string> chunk;
        while (ptr < stream.size() && !stream[ptr].empty()) {
            chunk.push_back(stream[ptr]);
            ptr++;
        }
        return chunk;
    }
};
