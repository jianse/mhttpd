//
// Created by lenne on 19-4-22.
//

#include "server.h"

void service() {
    s_config * config=NULL;
    get_config(config);
    printf("service on");
}
