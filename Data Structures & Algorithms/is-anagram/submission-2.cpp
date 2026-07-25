class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> sh, th;
        for (int i=0; i<s.length(); i++){
            sh[s[i]]++;
            th[t[i]]++;
        }
        return sh == th;
    }
};
