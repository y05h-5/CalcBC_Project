#include <stdio.h>

double x = -7.251;
double maximum = -5.463;
double increment = 0.001;
double diff;

int main(void){
    FILE *text;
    text = fopen("x-value.txt","w");
    while(x<maximum){
        fprintf(text,"%0.3f\n", x);
        x+=increment;
    }
    diff = x - maximum;
    if(diff>0.001){
        fprintf(text,"%0.3f\n", maximum);
    }
    fclose(text);
    return 0;
}