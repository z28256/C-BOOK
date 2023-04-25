#define _CRT_SECURE_NO_WARNINGS 1

//1.最长公共前缀
// 
//编写一个函数来查找字符串数组中的最长公共前缀。
//如果不存在公共前缀，返回空字符串 ""。

char* longestCommonPrefix(char** strs, int strsSize)
{
    int len = strlen(strs[0]);
    for (int j = 0; j < len; ++j)
    {
        for (int i = 1; i < strsSize; ++i)
        {
            if (strs[0][j] != strs[i][j])
            {
                strs[0][j] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}


//2.最长回文子串
// 
//给你一个字符串 s，找到 s 中最长的回文子串。
//如果字符串的反序与原始字符串相同，则该字符串称为回文字符串。

char* longestPalindrome(char* s)
{
    if (strlen(s) <= 1)
        return s;
    int start = 0, len = 0, count;

    // 用s[i] != '\0'来判断字符串是否结束
    // i += count
    for (int i = 0; s[i] != '\0'; i += count)
    {
        count = 1; //每次都要将count更新为1
        int left = i - 1;
        int right = i + 1;
        // 以i为中心,如果s[i] == s[right], count++,
        // 在进行下一次循环的时候i向后移count步,不需要判断回文串的奇偶
        while (s[right] != '\0' && s[i] == s[right])
        {
            right++;
            count++;
        }
        while (left >= 0 && s[right] && s[left] == s[right])
        {
            right++;
            left--;
        }
        if (right - left - 1 > len)
        {
            start = left + 1;
            len = right - left - 1;
        }
    }
    s[start + len] = '\0';
    return s + start;
}



void help(char* s, int length, int left, int right, int* start, int* len)
{
    //以i为中心，向两侧扩散
    while (left >= 0 && right < length && s[left] == s[right])
    {
        left--;
        right++;
    }
    //如果新的回文子串更长，则更改len的值
    if (right - left - 1 > *len)
    {
        *start = left + 1;
        *len = right - left - 1;
    }
}

char * longestPalindrome(char * s)
{
    //length 字符串长度，start 字串开始位置，len 子串长度
    int length = strlen(s), start = 0, len = 0;
    //奇数长度的回文子串
    for (int i = 0; i < length; ++i)
    {
        help(s, length, i - 1, i + 1, &start, &len);
    }
    //偶数长度的回文子串
    for (int i = 0; i < length; ++i)
    {
        help(s, length, i, i + 1, &start, &len);
    }
    s[start + len] = '\0';
    return s + start;
}


//3.反转字符串中的单词
// 
//给你一个字符串 s ，请你反转字符串中 单词 的顺序。
//单词 是由非空格字符组成的字符串。s 中使用至少一个空格将字符串中的 单词 分隔开。
//返回 单词 顺序颠倒且 单词 之间用单个空格连接的结果字符串。
//注意：输入字符串 s中可能会存在前导空格、尾随空格或者单词间的多个空格。
//返回的结果字符串中，单词间应当仅用单个空格分隔，且不包含任何额外的空格。

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
    //1.移除多余的空格
    int len = strlen(s);
    int fast = 0, slow = 0;
    //移除字符串之前的空格
    while (s[fast] == ' ')
    {
        fast++;
    }
    //移除字符串的单词间多余的空格
    while (fast < len - 1)
    {
        if (s[fast] == ' ' && s[fast + 1] == ' ')
        {
            fast++;
        }
        else
        {
            s[slow++] = s[fast++];
        }
    }
    //判断最后一个字符是否为' '，因为在前面移除空格的循环中，无法移除最后一个空格
    if (s[fast] != ' ')
    {
        s[slow++] = s[fast];
    }
    s[slow] = '\0';
    //逆序整个字符串
    reverse(s, 0, slow - 1);
    //逆序每个单词
    int i = 0;
    while (i < slow)
    {
        int j = i;
        while (j < slow && s[j] != ' ')
        {
            j++;
        }
        reverse(s, i, j - 1);
        i = j;
        i++;
    }
    return s;
}
