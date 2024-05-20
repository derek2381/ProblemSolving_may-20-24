// problem link
// https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/description/

class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char, int> mp;
        int n = s.length();
        int si = 0, max_len = 1;

        for(int e = 0; e < n;e++){
            if(mp.find(s[e]) == mp.end()){
                mp[s[e]] = 1;
            }else{
                mp[s[e]]++;
            }

            if(mp[s[e]] > 2){
                while(mp[s[e]] > 2){
                    mp[s[si]]--;

                    if(mp[s[si]] == 0){
                        mp.erase(s[si]);
                    }
                    si++;
                }
            }

            int len = e - si+1;

            if(len > max_len){
                max_len = len;
            }


        }

        return max_len;
    }
};
