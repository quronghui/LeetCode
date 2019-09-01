//
// Created by quronghui on 2019/9/1.
//
// 二维数组表示多个字符串的方式

#include <stdio.h>

char * longestCommonPrefix(char **strs, int strsSize){
    // 创建一个字符串空间，用于保存相同的前缀
    char* str=(char*)malloc(128);
    memset(str,0,128);

    int i,j=0;
    if(strsSize<=1)
        return *(strs);
    while(1)
    {
        i=0;
        while(i<strsSize-1)
        {   // 如果两个字符串不相等的前缀不相等；
            if(strs[i][j] != strs[i+1][j])
                return str;
            i++;
        }
        str[j]=strs[0][j];
        j++;
    }
    return str;
}
