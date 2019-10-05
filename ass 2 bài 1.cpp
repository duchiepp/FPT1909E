#include <stdio.h>
int main (){
	int a,b,c;
	printf ("Nhap 3 so a,b,c\n");
	scanf ("%d%d%d", &a, &b, &c);
	if ( a > b && b > c);
	printf ("Max = %d\n",a);
	printf ("Min = %d\n",c);
	if ( a > b && c > b && a > c);
	printf ("Max = %d\n",a);
	printf ("Min = %d\n",b);
	if ( a > b && c > b && c > a);
	printf ("Max = %d\n",c);
	printf ("Min = %d\n",b);
	if ( b > a && a > c);
	printf ("Max = %d\n",b);
	printf ("Min = %d\n",c);
	if ( b > a && c > a && b > c);
	printf ("Max = %d\n",b);
	printf ("Min = %d\n",a);
	if ( b > a && c > a && c > b);
	printf ("Max = %d\n",c);
	printf ("Min = %d\n",a);
	return 0;
}
