class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char, int> h1;
       map<char, int> h2;
       if(t.size()!=s.size()){
        return false;
       }
       for(char c : s){
        h1[c]++;
       }      
       for(char c : t){
        h2[c]++;
       }

       for(auto pair : h1){
        if (pair.second != h2[pair.first]){
            return false;
        }
       }
       return true;
    }
};