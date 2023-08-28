#include "ft_printf.h"

int main()
{
	const char *prueba = "String:%s char: %c num_unsign:%u decimal:%d hexa:%x hex_upper:%X";
	
	ft_printf(prueba, "vradis", 'c' , -68599 , 2 , 48879 , 9875666 );
	printf("\n");
	printf(prueba, "vradis", 'c' , -68599 , 2 , 48879 , 9875666 );
	printf("\n");
	
	int x = 42;
	int *ptr = &x;
	
	printf("Valor x : %d\n",x);
	printf("dirección de memoria x : %p\n", ptr);
	printf("\n");
	ft_printf("Valor x : %d\n",x);
	ft_printf("dirección de memoria x : %p\n", ptr);

	printf(" NULL %s NULL ", NULL);
	printf("\n");
	ft_printf("\n");
	ft_printf(" NULL %s NULL ", NULL);
	
	printf("\n");
	printf("decimal : %d\n", -200000);
	ft_printf("decimal : %d\n", -200000);
	
	printf("\n");
	printf("%%\n");
	ft_printf("%%\n");
	printf("\n");
	printf("null %% null\n");
	ft_printf("null %% null\n");
	printf("\n");
	printf("%%%%%%\n");
	ft_printf("%%%%%%\n");
	printf("\n");
	printf("%G", 2.5);
	ft_printf("%G", 2.5);
	
	return 0; 
}