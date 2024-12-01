#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> num_to_index;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        if (num_to_index.find(complement) != num_to_index.end()) {
            return {num_to_index[complement], i};
        }

        num_to_index[nums[i]] = i;
    }

    return {};  // Should not reach here as per the problem's assumptions
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {

        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." <<endl;
    }

    return 0;
}
