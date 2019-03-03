#include <stdio.h>      //look at 'x-values.c' for detailed comments
#include <math.h>

//double e = 2.718281;
#define e 2.728281
double x = -7.251;
double maximum = -5.463;
double increment = 0.001;
double exp1;
double y;
double diff;

int main(void){
    FILE *text;
    text = fopen("func2.txt","w");
    while(x<maximum){
        exp1 = pow(e, sin(2.0*(x)));
        y = exp1*(2.0*(cos(2.0*(x))));
        //y = (e^(sin(2.0*(x))))*(2.0*(cos(2.0*(x))));   //Operand '^' does not work --> use 'pow(value1, value2)'
        fprintf(text,"%f\n", y);
        x+=increment;
    }
    //diff = x - maximum;
    //if(diff>0.001){
        exp1 = pow(e, sin(2.0*(maximum)));
        fprintf(text,"%f\n", (exp1*(2.0*(cos(2.0*(maximum))))));
    //}
    fclose(text);
    return 0;
}
