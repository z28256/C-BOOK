#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现strstr

// int strStr(char * haystack, char * needle)
// {
//     int index1 = 0, index2 = 0;
//     int pos = 0;
//     while (haystack[index1] && needle[index2])
//     {
//         if (haystack[index1] == needle[index2])
//         {
//             index1++;
//             index2++;
//         }
//         else
//         {
//             index1 = ++pos;
//             index2 = 0;
//         }
//     }
//     if (needle[index2] == '\0')
//     {
//         return pos;
//     }
//     return -1;
// }


/*int strStr(char * haystack, char * needle)
{
    int n = strlen(haystack), m = strlen(needle);
    for (int i = 0; i + m <= n; ++i)
    {
        bool flag = true;
        for (int j = 0; j < m; ++j)
        {
            if (haystack[i + j] != needle[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            return i;
        }
    }
    return -1;
}*/


//Next数组
void getNext(int* next, char* s)
{
    //初始化next数组
    next[0] = 0;
    int len = strlen(s);
    //i从1开始（ i 和 j 一前一后）
    for (int i = 1, j = 0; i < len; ++i)
    {
        //如果前后缀不同,j就向前回退，直到j为0
        while (j > 0 && s[i] != s[j])
        {
            j = next[j - 1];
        }
        //如果前后缀相同,i和j同时向后移动
        if (s[i] == s[j])
        {
            j++;
        }
        //将j（前缀的长度）赋值给next[i]
        next[i] = j;
    }
}


int strStr(char* haystack, char* needle)
{
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    //当needle为空字符串时，返回0
    if (len2 == 0)
        return 0;

    //创建next数组
    int next[len2];
    getNext(next, needle);

    int j = 0;
    for (int i = 0; i < len1; ++i)
    {
        //若不匹配
        while (j > 0 && haystack[i] != needle[j])
        {
            j = next[j - 1];
        }
        //如果匹配
        if (haystack[i] == needle[j])
        {
            j++;
        }
        //当j等于needle的长度时，说明找到了
        if (j == len2)
        {
            return i - len2 + 1;
        }
    }
    return -1;
}
