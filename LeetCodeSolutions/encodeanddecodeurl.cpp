class Solution {
public:
  unordered_map<int,string> mp;
  int key = 0;
    
  // Encodes a URL to a shortened URL.
  string encode(string longUrl) {
    mp[key++] = longUrl;
    return to_string(key-1);
  }

    // Decodes a shortened URL to its original URL.
  string decode(string shortUrl) {
    return mp[stoi(shortUrl)];
  }
};
