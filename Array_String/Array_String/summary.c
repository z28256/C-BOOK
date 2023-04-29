#define _CRT_SECURE_NO_WARNINGS 1

//1.杨辉三角
//给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。

int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    *returnSize = numRows;
    int** ret = (int**)malloc(*returnSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    for (int i = 0; i < numRows; ++i)
    {
        (*returnColumnSizes)[i] = i + 1;
        ret[i] = (int*)malloc((*returnColumnSizes)[i] * sizeof(int));
        ret[i][i] = ret[i][0] = 1;
        //j 从 1 开始（j等于0的已经被赋值）
        //j < i（j等于i的已经被赋值）
        for (int j = 1; j < i; ++j)
        {
            ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
        }
    }
    return ret;
}



//2.杨辉三角 II

//给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行。
//在「杨辉三角」中，每个数是它左上方和右上方的数的和。

//二项式系数在三角形中的一种几何排列,它把二项式系数图形化，
//把组合数内在的一些代数性质直观地从图形中体现出来，是一种离散型的数与形的结合。

//(a + b)^n 的展开式（二项式展开）中的各项系数依次对应杨辉三角的第 n 行中的每一项。

//(1)线性递推（根据组合数的公式）Cn,m = n!/m!(n-m)! 
//Cn,m = Cn,m-1 * (n-m+1)/m

int* getRow(int rowIndex, int* returnSize)
{
    *returnSize = rowIndex + 1;
    int* ret = (int*)malloc(*returnSize * sizeof(int));
    ret[0] = 1;
    for (int i = 1; i < *returnSize; ++i)
    {
        ret[i] = 1L * ret[i - 1] * (rowIndex - i + 1) / i;
    }
    return ret;
}


//(2.1)递推
/*int* getRow(int rowIndex, int* returnSize)
{
    *returnSize = rowIndex + 1;
    int* row = (int*)calloc(*returnSize, sizeof(int));
    row[0] = 1;
    for (int i = 1; i <= rowIndex; ++i)
    {
        for (int j = i; j > 0; --j)
        {
            row[j] += row[j - 1];
        }
    }
    return row;
}*/


//(2.2)递推
/*int* getRow(int rowIndex, int* returnSize)
{
    *returnSize = rowIndex + 1;
    int* ret = (int*)malloc(*returnSize * sizeof(int));
    for (int i = 0; i < *returnSize; ++i)
    {
        ret[i] = 1;
    }
    for (int i = 2; i <= rowIndex; ++i)
    {
        int index = i / 2;
        while (index)
        {
            ret[index] += ret[index - 1];
            ret[i - index] = ret[index];
            index--;
        }
    }
    return ret;
}*/



//3.反转字符串中的单词 

//给定一个字符串 s ，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

void reverse(char* s, int left, int right)
{
    while (left < right)
    {
        char ch = s[left];
        s[left++] = s[right];
        s[right--] = ch;
    }
}

char* reverseWords(char* s)
{
    int index = 0;
    int len = strlen(s);
    while (index < len)
    {
        int left = index;
        while (s[index] != ' ' && index < len)
        {
            index++;
        }
        reverse(s, left, index - 1);
        index++;
    }
    return s;
}


//4.寻找旋转排序数组中的最小值
//已知一个长度为 n 的数组，预先按照升序排列，经由 1 到 n 次 旋转 后，得到输入数组。

int findMin(int* nums, int numsSize)
{
    int low = 0, high = numsSize - 1;
    while (low < high)
    {
        int mid = (high - low) / 2 + low;
        if (nums[mid] <= nums[high])//数组中可能出现相同的元素
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return nums[low];//nums[high]也一样
}


//5.删除排序数组中的重复项
// 
//给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，
//返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。

int removeDuplicates(int* nums, int numsSize)
{
    int fast = 1, slow = 1;
    while (fast < numsSize)
    {
        if (nums[fast - 1] != nums[fast])
        {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    return slow;
}


//6.移动零

//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//请注意 ，必须在不复制数组的情况下原地对数组进行操作。

//（1）
void moveZeroes(int* nums, int numsSize)
{
    int fast = 0, slow = 0;
    while (fast < numsSize)
    {
        if (nums[fast])
        {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    while (slow < numsSize)
    {
        nums[slow++] = 0;
    }
}


//（2）
 void swap(int* a, int* b)
 {
     int temp = *a;
     *a = *b;
     *b = temp;
 }
 void moveZeroes(int* nums, int numsSize)
 {
     int left = 0, right = 0;
     while (right < numsSize)
     {
         if (nums[right])
         {
             swap(nums + left, nums + right);
             left++;
         }
         right++;
     }
 }