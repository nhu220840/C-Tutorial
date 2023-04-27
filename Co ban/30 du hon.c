#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	float delta, x1, x2;
	delta = b*b - 4*a*c;
	x1 = (-b - sqrt(delta)) / (2*a);
	x2 = (-b + sqrt(delta)) / (2*a);
	
	if(a != 0)
	{
		if(delta > 0)
		{
			printf("%.2f %.2f", x1, x2);
		}
		else if(delta == 0)
		{
			printf("%.2f", x1);
		}
		else
		{
			printf("NO");
		}
	}
	
	if(a == 0)
	{
		if(b != 0)
		{
			printf("%.2f",  (float)-c/b);
		}
		if(b == 0 && c != 0)
		{
			printf("NO");
		}
		if(b == 0 && c == 0) printf("INF");
	}
	return 0;
}
