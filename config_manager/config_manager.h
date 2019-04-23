//
// Created by lenne on 19-4-23.
//

#ifndef MHTTPD_CONFIG_MANAGER_H
#define MHTTPD_CONFIG_MANAGER_H

#define PORT

typedef struct config s_config;

typedef struct sc_item s_config_item;


/**
 * 从配置管理器得到配置
 * @param config 返回值
 */
void get_config(s_config * config);

/**
 * 让配置管理器加载配置
 * @param argc 命令行参数个数
 * @param argv 命令行参数值
 * @param config 返回值
 */
void load_config(int argc,char ** argv,s_config * config);

#endif //MHTTPD_CONFIG_MANAGER_H
