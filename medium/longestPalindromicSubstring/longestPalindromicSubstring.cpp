#include <bits/stdc++.h>
class Solution{
    std::string longestPalindromicSubstring(std::string s){
        std::string ans {""};
        std::string maxAns {""};
        for (int c = 0; c < s.length(); c++){
            ans = "";
            for (int i,j = 1; i < s.length() && j >= 0; i++,j++){
                if (s[c+i] != s[c-j]){
                    break;
                }
                ans += s[c+i];
                ans += s[c-j];
                maxAns = std::max(ans.length(),maxAns.length());

        



            }            
            
                
        

        }
        return maxAns;

    };

};