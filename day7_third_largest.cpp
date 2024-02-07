#include <stdio.h>
#include <limits.h>

int thirdMax(int* nums, int numsSize) {
    long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

    for (int i = 0; i < numsSize; ++i) {
        int num = nums[i];
        if (num > first) {
            third = second;
            second = first;
            first = num;
        } else if (first > num && num > second) {
            third = second;
            second = num;
        } else if (second > num && num > third) {
            third = num;
        }
    }

    if (third != LONG_MIN) {
        return (int)third;
    } else {
        return (int)first;
    }
}

int main() {
    int nums[] = {3,2,1,1,5,3};
    printf("The third maximum number is %d\n", thirdMax(nums, sizeof(nums)/sizeof(int)));
    return 0;
}

