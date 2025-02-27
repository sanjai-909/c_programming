//Quadratic equation 
#include<stdio.h> 
#include<math.h> 

int main(){
    float a,b,c;
    printf("Enter the (a,b,c): ");
    scanf("%f%f%f",&a,&b,&c);
    /*
        x1,x2= -b (+-)sqrt(b^2 -4ac)
                ____________________
                        2a
    */
    float det=((b*b)- (4*a*c));

    if(det < 0){
        printf("IMAGINARY ROOTS\n");
        printf("cannot able to find the root\n");
        return 0;
    }else if(det >0){
        printf("REAL & DIFFERENT ROOTS \n");
    }else{
        printf("REAL & EQUAL ROOTS\n");
    }

    double x1=( (-b)+sqrt(det) )/(2*a); //sqrt returns the double value
    double x2=( (-b)-sqrt(det) )/(2*a);
    printf("The roots are %f and %f \n",x1,x2);
    return 0;
}