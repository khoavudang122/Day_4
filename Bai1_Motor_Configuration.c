#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

const typedef struct {
    uint32_t MAX_RPM;
    float MAX_CURRENT;
    float MAX_TEMPERATURE ;
}motor_config;


int main(void){

    motor_config *obj_1 = &(motor_config){3000,5.0,80.0};
    printf("MAX_RPM: %"PRIu32"\n",obj_1->MAX_RPM);
    printf("MAX_CURRENT: %.2f\n",obj_1->MAX_CURRENT);
    printf("MAX_TEMP: %.2f",obj_1->MAX_TEMPERATURE);
    free(obj_1);


}