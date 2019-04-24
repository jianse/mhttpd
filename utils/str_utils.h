//
// Created by 14841 on 2019/4/24.
//

#ifndef MHTTPD_STR_UTILS_H
#define MHTTPD_STR_UTILS_H

#include <string.h>
#include <stdbool.h>
#include <ctype.h>


/**
 * 去掉字符串首尾的空白字符
 * @param str
 */
void trim(char * str);

 /**
  * 判断字符串是否为空串
  * @param str 要检查的字符串
  * @return true if blank,else false
  */
bool is_blank(char *str);


#endif //MHTTPD_STR_UTILS_H
