#include <bits/stdc++.h>
class Solution{
    public: 
        std::vector<std::vector<int>> threeSum(std::vector<int> nums){
            std::vector<std::vector<int>> real;		
            std::sort(nums.begin(), nums.end());
            for (int i{}; i < nums.size() - 2; i++){
                int j = nums.size()-1;
                int k{i+1};
                if (i > 0 && nums[i]==nums[i-1]){

                    continue;

                }
                while (k < j){

                    int sum {nums[i]+nums[j]+nums[k]};
                    if (sum == 0){
                        real.push_back({nums[i],nums[j],nums[k]});
                        k++;
                        j--;	
                        
                    }	
                    else if (sum > 0) {
                        j--;		
                    }
                    else{
                        k++;
                    }
                }

            
            }	
            
            return real;
        }

};

int main(){
	Solution solution;
	std::vector<int> nums {{-1,0,1,2,-1,-4}}; 
	std::vector<std::vector<int>> v = solution.threeSum(nums);
    for (const auto &triplet : v){
    for (int x : triplet){
        std::cout << x << ", ";
    }
    std::cout << "\n";
}


}
