#include <iostream>
#include <unordered_map>

class Solution {
public:
    Solution() {
        base_url = "http://tinyurl.com/";
        counter = 1;
    }

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if (long_to_short.find(longUrl) != long_to_short.end()) {
            return long_to_short[longUrl];
        }

        string shortUrl = base_url + to_string(counter++);
        long_to_short[longUrl] = shortUrl;
        short_to_long[shortUrl] = longUrl;

        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return short_to_long[shortUrl];
    }

private:
    string base_url;
    int counter;
    unordered_map<string, string> long_to_short;
    unordered_map<string, string> short_to_long;
};