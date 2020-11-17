#include <stdio.h>
#include "myMath.h"

int main (){
	double x;
	printf("Please inset a real number:\n");
	scanf("%lf", &x);
	int r=(int)(x);
	//e^x0
	double exp=Exponent(r);
        //x^3
	double powi=Power(x,3);
	//e^x + x^2
	float a=(float)(exp);
        float b=(float)(powi);
	float addi=add(a,b);
	//e^x + x^3-2 
	float subi=sub(addi,2);
	printf("The value of f(x)=e^x + x^3- 2 at the point %0.4lf is: %0.4lf\n" ,x ,subi);
	//3x
	double muli=mul(x,3);                                                                                                  	//x^2
	powi=Power(x,2);
	//2x^2
	double muli2=mul(powi,2);
	a=(float)(muli);
	b=(float)(muli2);
	addi=add(a,b);
	printf("The value of f(x) =3x +2x^2 at the point %0.4lf is: %0.4lf\n ", x, addi);
						                                                                                 //x^3
	powi=Power(x,3);                                                                                                        //4x^3
						                                                                                muli=mul(powi,4);
	//(4x^3)/5
  	double divi=div(divi,5);
	//2x
	muli=mul(x,2);
	//(4x^3)/5 -2x
	a=(float)(divi);
	b=(float)(muli);
	subi=sub(a,b);
	printf("The value of f(x) = (4x^3)/5-2x at the point %0.4lf is : %0.4lf\n" ,x,subi);
						                                                                                                                                                                                                                                                                                                         }
