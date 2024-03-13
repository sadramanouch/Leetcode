#include <iostream>
#include <unordered_map>

class Solution {
public:
    Solution() {
        base_url = "http://tinyurl.com/";
        counter = 1;
    }

    // Encodes a URL to a shortened URL.
    std::string encode(std::string longUrl) {
        if (long_to_short.find(longUrl) != long_to_short.end()) {
            return long_to_short[longUrl];
        }

        std::string shortUrl = base_url + std::to_string(counter++);
        long_to_short[longUrl] = shortUrl;
        short_to_long[shortUrl] = longUrl;

        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    std::string decode(std::string shortUrl) {
        return short_to_long[shortUrl];
    }

private:
    std::string base_url;
    int counter;
    std::unordered_map<std::string, std::string> long_to_short;
    std::unordered_map<std::string, std::string> short_to_long;
};