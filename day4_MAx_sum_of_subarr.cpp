#include <stdio.h>

int maxSubArray(int* nums, int size) {
    int dp[size];
    int ans = nums[0];
    dp[0] = nums[0];

    for (int i = 1; i < size; i++) {
        dp[i] = (nums[i] > nums[i] + dp[i - 1]) ? nums[i] : (nums[i] + dp[i - 1]);
        ans = (ans > dp[i]) ? ans : dp[i];
    }

    return ans;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = maxSubArray(nums, numsSize);

    printf("Maximum subarray sum: %d\n", result);

    return 0;
}

