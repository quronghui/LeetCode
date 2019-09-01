//
// Created by quronghui on 2019/9/1.
//
// 题目67：二进制数求和
//1. 解题思路：
//   (1)输入：是字符串的类型，按照字符串的方式进行求解
//   （2）由后往前进行比较

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * addBinary(char * a, char * b){
    int i = strlen(a);
    int j = strlen(b);

    int len = i > j? i: j;
    char* res = (char*)malloc(sizeof(char) * (len + 1));
    res[++len] = 0;     // 这里要使用++len才能正确

    char carry = '0';       // 表示进位
    char pa, pb;
    // 由后往前进行比较
    while(len > 1 || carry == '1') {
        pa = i > 0? a[--i]: '0';
        pb = j > 0? b[--j]: '0';
        res[--len] = pa ^ pb ^ carry; // 当前位
        carry = (pa & carry) | (pb & carry) | (pa & pb); //进位
    }
    return res + len;
}

int main()
{
    char a[] = "1010";
    char b[] = "1011";
    char *string = addBinary(a,b);
    printf("This sum is %s.\n",string);
    return 0;
}

