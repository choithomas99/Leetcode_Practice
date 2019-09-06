

/**
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    *returnSize=2;
    for (int i=0; i < numsSize; i++){
        for (int j=i+1; j <numsSize; j++){
            if (nums[i]+nums[j]==target){
                int *ans=(int*)malloc(sizeof(int)*2);
                ans[0]=i;
                ans[1]=j;
                
                return ans;
            }
        }
    }
    return NULL;
}
int main () {
    int nums[]= {2,7,11,15};
    int returnnum= 49129;
    int *answ=twoSum(nums, 4, 9, &returnnum);
    printf("%d, %d \n" , answ[0],answ[1] );
    free(answ);
    return 0;
}


