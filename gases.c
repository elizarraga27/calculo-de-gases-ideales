/*programa gases*/
#include <stdio.h>
main()
{
	const float R=0.082;
	char q;
	float x, y, z, a, h, s;
	printf("introdusca la inicial de lo que va a calcular\n");
	scanf("%c", &q);
	if ((q=='p')||(q=='P'))
	{
		printf("introducir numero de moles del gas\n");
		scanf("%f", &x);
		printf("introducir temperatura del gas\n");
		scanf("%f", &y);
		printf("introducir el volumen que ocupa el gas\n");
		scanf("%f", &z);
		h = x * R * y;
		a = h/z;
		printf("el valor de la presion del gas es %f atm\n",a);
	}
	
	if ((q=='v')||(q=='V'))
	{
		printf("introducir numero de moles del gas\n");
		scanf("%f", &x);
		printf("introducir temperatura del gas\n");
		scanf("%f", &y);
		printf("introducir la presion del gas\n");
		scanf("%f", &a);
		h = x * R * y;
		z = h/a;
		printf("el valor del volumen que ocupa el gas es %f litros\n",z);
	}

	if ((q=='n')||(q=='N'))
	{
		printf("introducir temperatura del gas\n");
		scanf("%f", &y);
		printf("introducir la presion del gas\n");
		scanf("%f", &a);
		printf("introducir el volumen que ocupa el gas\n");
		scanf("%f", &z);
		x = (a*z)/(y*R);
		printf("los moles del gas son: %f moles\n",x);
	}
	if ((q=='y')||(q=='y'))
	{
		printf("introducir la presion del gas\n");
		scanf("%f", &a);
		printf("introducir el volumen que ocupa el gas\n");
		scanf("%f", &z);
		printf("introducir numero de moles del gas\n");
		scanf("%f", &x);
		y = (a*z)/(R*x);
		printf("la temperatura del gas es de: %f grados kelvin\n",y);
	}
	if (q=='M')
	{
		printf("introducir temperatura del gas\n");
		scanf("%f", &y);
		printf("introducir la presion del gas\n");
		scanf("%f", &a);
		s= a/(R*y);
		printf("la concentracion molar del gas es: %f mol/litros\n",s);
	}
}
	
		
		









