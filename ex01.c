#include <stdio.h> 
float big(float a, float b, float c)
{
	if(a>=b && a>=c) return a;
	else if(b>=a && b>=c) return b;
	else return c;
}

int main()
{
	float num1, num2, num3, largest;
	
	scanf("%f %f %f", &num1, &num2, &num3);
	
	largest = big(num1, num2, num3);
	printf("Max number is %.2f",largest);
	return 0;
}
