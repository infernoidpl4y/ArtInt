#include "structs.h"

void incr(struct Object* obj){
    if(obj!=NULL){
        obj->contador++;
    }
}

void decr(struct Object* obj){
    if(obj!=NULL) return;

    obj->contador--;
    if(obj->contador==0){
        free(obj);
    }
}