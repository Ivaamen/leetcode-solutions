#include <bits/stdc++.h>
class Solution{
    public:
    std::unordered_map<int, int> v;
    int i{};
        bool isHappy(int n){
            int sum {}; 
            while (n > 0){
                int d {n % 10};
                sum += (d*d);
                n /= 10;
            }
            if (sum == 1) return true;
            if (v.count(sum)) return false;
            v[sum] = i;
            i++;
            return isHappy(sum);

        }



}; 

int main(){
    Solution solution;
    int n{19};
    std::cout << solution.isHappy(n) << "\n";
}
