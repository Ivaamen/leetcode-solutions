#include <bits/stdc++.h>
class Solution{
    public:
        int strStr(std::string haystack, std::string needle){
            int h = haystack.size();
            int n = needle.size();
            for (int i{}; i <= h - n; i++){
               for (int j{i}; j < i + h; j++){
                   if (needle[j-i] != haystack[j]){
                        break;
                   }
                   if (j == (i+needle.size()-1)){
                        return i;

                   } 



               } 


            }
            return -1;
            
        }




};

// Boilerplate solution code 
int main(){
    Solution solution;
    std::string haystack {"sadbutsad"};
    std::string needle {"sad"};
    std::cout << solution.strStr(haystack, needle); 


}