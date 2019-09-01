//
// Created by quronghui on 2019/9/1.
//
// 实现 strStr() 函数。找出第二个字符串在第一个字符串中的位置
// 1.解题思路：
int strStr(char * haystack, char * needle)
{
    int i = 0, j = 0;
    int t = i;  //记录相同元素在haystack中的位置
    while(haystack[i] && needle[j]){
        if(haystack[i] == needle[j]){
            i++;j++;    // 相等，继续查找needle字符串的下一个元素
            continue;
        }
        else{   // 不相等
            t = t+1; i = t; j = 0;
        }
    }
    if(needle[j] == '\0')
        return t;
    return -1;
}
