#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char buffer[10]; // Buffer de 10 bytes

    // Inicializar o buffer com valores arbitrários (zero, por exemplo)
    for (int i = 0; i < 10; i++)
        buffer[i] = 0;

    // Exibir o conteúdo original do buffer
    printf("Buffer original: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", buffer[i]);
    printf("\n");

    // Usar ft_memset para preencher o buffer com o valor 65 ('A' em ASCII)
    ft_memset(buffer, 65, 10);

    // Exibir o conteúdo modificado do buffer
    printf("Buffer modificado: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", buffer[i]);
    printf("\n");
	return (0);
}