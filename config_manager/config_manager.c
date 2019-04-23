//
// Created by lenne on 19-4-23.
//

#include "config_manager.h"

struct sc_item{
    unsigned int sc_name;
    char * sc_value;
    unsigned int sc_priority;
};

struct config{
    unsigned int sc_item_count;
    struct sc_item * sc_items;
};

void load_config(int argc, char **argv, s_config *config) {

}

void get_config( s_config *config) {

}
