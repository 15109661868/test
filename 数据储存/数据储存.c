#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int search(int* nums[], int numsSize, int target)
{
	int left = 0;
	int reght = numsSize - 1;
	while (left <= reght)
	{
		int middle = left + (reght - left) / 2;
		if (nums[middle] > target)
		{
			reght = middle - 1;
		}
		else if (nums[middle] < target)
		{
			left = middle + 1;
		}
		else
		{
			return middle;
		}
	}
	return -1;
}

int main()
{
	int nums[] = { 2,6,8,4,9,10 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 0;
	scanf("%d", &target);
	int ret = search(nums, numsSize, target);
	printf("%d", ret);
	return 0;
}