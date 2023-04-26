#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ��strstr

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


//Next����
void getNext(int* next, char* s)
{
    //��ʼ��next����
    next[0] = 0;
    int len = strlen(s);
    //i��1��ʼ�� i �� j һǰһ��
    for (int i = 1, j = 0; i < len; ++i)
    {
        //���ǰ��׺��ͬ,j����ǰ���ˣ�ֱ��jΪ0
        while (j > 0 && s[i] != s[j])
        {
            j = next[j - 1];
        }
        //���ǰ��׺��ͬ,i��jͬʱ����ƶ�
        if (s[i] == s[j])
        {
            j++;
        }
        //��j��ǰ׺�ĳ��ȣ���ֵ��next[i]
        next[i] = j;
    }
}


int strStr(char* haystack, char* needle)
{
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    //��needleΪ���ַ���ʱ������0
    if (len2 == 0)
        return 0;

    //����next����
    int next[len2];
    getNext(next, needle);

    int j = 0;
    for (int i = 0; i < len1; ++i)
    {
        //����ƥ��
        while (j > 0 && haystack[i] != needle[j])
        {
            j = next[j - 1];
        }
        //���ƥ��
        if (haystack[i] == needle[j])
        {
            j++;
        }
        //��j����needle�ĳ���ʱ��˵���ҵ���
        if (j == len2)
        {
            return i - len2 + 1;
        }
    }
    return -1;
}
