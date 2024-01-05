#include <iostream>
#include <vector>
#include "../utils.h"


using namespace utils;


class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int median;
        median = (nums1[nums1.size() / 2] + nums2[nums2.size() / 2]) / 2;

        return median;  
    };
};


int main() {
    std::string input_line;

    std::getline(std::cin, input_line);
    std::vector<int> nums1 = fill_vector_from_string(input_line);

    std::getline(std::cin, input_line);
    std::vector<int> nums2 = fill_vector_from_string(input_line);

    Solution solution;
    solution.findMedianSortedArrays(nums1, nums2);

    return 0;
};