nclude "myMath.h"
#define EXPONENT 2.718
double Exponent(int x) {
	  float exp = EXPONENT;
	    double ans =1;
	      if(x<0){
		      x=x*(-1);
		      exp = 1/exp;
}	
while(x!=0){
	ans*=exp ;
	x--;
}
return ans;
}

double Power(double x,int y){
	double ans=1;
	while(y!=0){
		ans=ans*x;
		y--;
		}
return ans;

}
