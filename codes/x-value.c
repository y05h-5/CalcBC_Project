#include <stdio.h>

double x = -7.251;         //Minimum endpoint for the graphs(where they intersect). Found by grapphing on desmos.com.
double maximum = -5.463;   //Maximum endpoint for the graphs. 
double increment = 0.001;  //Increments for the x value to increase. dx?
double diff;               //Empty double variable for checking the difference between final x value and maximum endpoint.

int main(void){
    FILE *text;                      //creating a file for output
    text = fopen("x-value.txt","w");
    while(x<maximum){                //run the function while x value is smaller than the maximum endpoint
        fprintf(text,"%0.3f\n", x);  //print the x value into the file upto 3rd decimal place.
        x+=increment;                //add increments to the x value, the loop continues while x value is smaller than the maximum endpoint.
    }
    diff = x - maximum;              //compare the final x value and maximum endpoint value (-5.463).
    if(diff>0.001){                       //run the function if the difference is greater than 0.001
        fprintf(text,"%0.3f\n", maximum); //print the maximum endpoint value into the file.
    }
    fclose(text);
    return 0;
}
