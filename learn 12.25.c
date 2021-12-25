#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i, j;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] < target)
        {
            for (j = i; j < numsSize - 1; j++)
            {
                if (nums[j] < target && nums[i] + nums[j] == target)
                {
                    returnSize[0] = i;
                    returnSize[1] = j;
                    return returnSize;
                }
            }
        }
    }
}
int main()
{
    int arr1[4] = { 0 };
    int arr2[2];
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    int i = 0, target = 0;
    printf("输入数组：");
    for (i = 0; i < sz; i++)
    {
        scanf_s("%d", &arr1[i]);
    }
    printf("\n输入目标值：");
    scanf_s("%d", &target);
    //twoSum(arr1, sz, target, arr2);
    //printf("\n%d,%d\n", arr2[0], arr2[1]);
    int* p = twoSum(arr1, sz, target, arr2);
    printf("\n%d,%d\n", *p,*p+1);

    return 0;
}