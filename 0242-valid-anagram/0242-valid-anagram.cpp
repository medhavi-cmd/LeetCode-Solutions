class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> hash1;
        map<char, int> hash2;

        if (s.length() != t.length())
            return false;

        for(char c : s){
            hash1[c]++;
        }
        for(char c : t){
            hash2[c]++;
        }
        for (auto pair1 : hash1) {
            if (pair1.second != hash2[pair1.first]) {
                return false;
            }
        }
        return true;
        
    }
};