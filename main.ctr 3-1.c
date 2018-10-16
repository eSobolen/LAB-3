#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float a,b,sum,counter;
	  
	  a=1.0;
	  counter=0;
	  sum=0;
	while(sum<=5){
		b=1.0/a;
		a++;
		sum+=b;
		counter++;
		
	}
	printf("%.0f slagaemih v summe",counter);
	return 0;
}
