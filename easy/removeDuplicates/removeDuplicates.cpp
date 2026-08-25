#include <bits/stdc++.h>
class Solution{
    public:
        int removeDuplicates(std::vector<int> nums){
            if (nums.empty()){
                return 0;
            }
            int i{};
            int j{1};
            while (i < nums.size() && j < nums.size()){
                if (nums[i] != nums[j]){
                    i++;
                    nums[i] = nums[j];
                

                }
                j++;
            }
            return i+1;


        }




};
//boilerplate runner code
int main(){
Solution solution;
std::vector<int> a = {1,1,2};
std::cout<<solution.removeDuplicates(a);

}