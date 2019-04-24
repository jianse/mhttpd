//
// Created by 14841 on 2019/4/24.
//
#include <stdio.h>
#include "str_utils.h"

int main(int argc,char ** argv)
{
    char str[30];
    strcpy(str,"  \t\t00  ");
    printf("'%s'\n",str);
    trim(str);
    printf("'%s'\n",str);

    return 0;
}
