//
// Created by 14841 on 2019/4/24.
//

#include "str_utils.h"

void trim(char *str) {
    int len = strlen(str);
    int head=0;
    int tail=len-1;
    if(is_blank(str))
    {
        *str='\0';
        return;
    }
    for(;head<len;head++)
    {
        if(!isblank(*(str+head)))
        {
            break;
        }
    }
    for(;tail>=0;tail--)
    {
        if(!isblank(*(str+head)))
        {
            break;
        }
    }
    memmove(str,str+head,tail+1-head);
    str[tail+1-head]='\0';
}

bool is_blank(char *str) {
    for(int i =0;i<strlen(str);i++)
    {
        if(!isblank(*(str + i)))
        {
           return false;
        }
    }
    return true;
}
