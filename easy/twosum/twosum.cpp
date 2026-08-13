#include <bits/stdc++.h>
 template<typename T> // 
 std::ostream& operator<<(std::ostream& os, const std::vector<T> & v) {
        for (auto& x : v) os << x << " ";
        return os;
    } 
class Solution{
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target){
            std::unordered_map<int, int> hashTable;
            for (int i {}; i < nums.size(); i++){
                int complement = target-nums[i];
                if(hashTable.count(complement)){
                    return{hashTable[complement],i};
                }
                hashTable[nums[i]] = i;

            }
            return {};

        }


};
int main(){
    Solution solution;
    int target {9};
    std::vector<int> nums = {1,2,3,4,5,6,7,3};
    std::cout << solution.twoSum(nums, target);
   

    
}
