#define _CRT_SECURE_NO_WARNINGS 1

//1.�����ǰ׺
// 
//��дһ�������������ַ��������е������ǰ׺��
//��������ڹ���ǰ׺�����ؿ��ַ��� ""��

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


//2.������Ӵ�
// 
//����һ���ַ��� s���ҵ� s ����Ļ����Ӵ���
//����ַ����ķ�����ԭʼ�ַ�����ͬ������ַ�����Ϊ�����ַ�����

char* longestPalindrome(char* s)
{
    if (strlen(s) <= 1)
        return s;
    int start = 0, len = 0, count;

    // ��s[i] != '\0'���ж��ַ����Ƿ����
    // i += count
    for (int i = 0; s[i] != '\0'; i += count)
    {
        count = 1; //ÿ�ζ�Ҫ��count����Ϊ1
        int left = i - 1;
        int right = i + 1;
        // ��iΪ����,���s[i] == s[right], count++,
        // �ڽ�����һ��ѭ����ʱ��i�����count��,����Ҫ�жϻ��Ĵ�����ż
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
    //��iΪ���ģ���������ɢ
    while (left >= 0 && right < length && s[left] == s[right])
    {
        left--;
        right++;
    }
    //����µĻ����Ӵ������������len��ֵ
    if (right - left - 1 > *len)
    {
        *start = left + 1;
        *len = right - left - 1;
    }
}

char * longestPalindrome(char * s)
{
    //length �ַ������ȣ�start �ִ���ʼλ�ã�len �Ӵ�����
    int length = strlen(s), start = 0, len = 0;
    //�������ȵĻ����Ӵ�
    for (int i = 0; i < length; ++i)
    {
        help(s, length, i - 1, i + 1, &start, &len);
    }
    //ż�����ȵĻ����Ӵ�
    for (int i = 0; i < length; ++i)
    {
        help(s, length, i, i + 1, &start, &len);
    }
    s[start + len] = '\0';
    return s + start;
}


//3.��ת�ַ����еĵ���
// 
//����һ���ַ��� s �����㷴ת�ַ����� ���� ��˳��
//���� ���ɷǿո��ַ���ɵ��ַ�����s ��ʹ������һ���ո��ַ����е� ���� �ָ�����
//���� ���� ˳��ߵ��� ���� ֮���õ����ո����ӵĽ���ַ�����
//ע�⣺�����ַ��� s�п��ܻ����ǰ���ո�β��ո���ߵ��ʼ�Ķ���ո�
//���صĽ���ַ����У����ʼ�Ӧ�����õ����ո�ָ����Ҳ������κζ���Ŀո�

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
    //1.�Ƴ�����Ŀո�
    int len = strlen(s);
    int fast = 0, slow = 0;
    //�Ƴ��ַ���֮ǰ�Ŀո�
    while (s[fast] == ' ')
    {
        fast++;
    }
    //�Ƴ��ַ����ĵ��ʼ����Ŀո�
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
    //�ж����һ���ַ��Ƿ�Ϊ' '����Ϊ��ǰ���Ƴ��ո��ѭ���У��޷��Ƴ����һ���ո�
    if (s[fast] != ' ')
    {
        s[slow++] = s[fast];
    }
    s[slow] = '\0';
    //���������ַ���
    reverse(s, 0, slow - 1);
    //����ÿ������
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
