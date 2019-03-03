#include <stdio.h>    //look at 'x-values.c' for detailed comments
#include <math.h>

double x = -7.251;
double maximum = -5.463;
double increment = 0.001;
double exp1;
double y;
double diff;

int main(void){
    FILE *text;
    text = fopen("func1.txt","w");
    while(x<maximum){
        exp1 = pow(x, 2.0);
        y = (2.0*x)/(exp1-1.0);
        fprintf(text,"%f\n", y);
        x+=increment;
    }
    //diff = x-maximum;
    //if(diff>0.001){
        exp1 = pow(maximum, 2.0);
        fprintf(text,"%f\n", (2.0*maximum)/(exp1-1.0));
    //}
    fclose(text);
    return 0;
}
