#include <bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int>& nums) {
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int num : nums) {
        if (num < smallest) {
            secondSmallest = smallest;
            smallest = num;
        } 
        else if (num < secondSmallest && num > smallest) {
            secondSmallest = num;
        }
    }

    return (secondSmallest == INT_MAX) ? -1 : secondSmallest;
}

int main() {
    vector<int> nums = {8, 8, 7, 6, 5};
    cout << secondSmallest(nums);
}
