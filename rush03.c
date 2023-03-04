void	ft_putchar(char a);

void	rush(int x, int y)
{
    // definir as variáveis que vão ser alteradas dentro da função e comparadas
    // com o que o usuário inserir, para definirmos se inserir A, B ou C
	int p;
	int r;

    // inicializar com r = 1
	r = 1;

    // vamos aumentar r até chegar no valor y que o usuário colocou
    // while-enquanto for menor, essa função vai rodar
    // x tem que ser maior que 0 para ter uma linha
	while (r <= y && x > 0)
	{

        // inicializar p = 1
		p = 1;

        // vamos aumentar p até chegar no valor x que o usuário colocou
        // while-enquanto for menor, essa função vai rodar
		while (p <= x)
		{

            // definir se é o vértice da coluna da esqueda
            // condição: ser o primeiro ou último número da primeira coluna 
            // ou seja, primeiro pros dois contadores = 1;
            // o contador de y = 1 e r = y (o último caracter do y)
			if ((p == 1 && r == 1) || (p == 1 && r == y))
				ft_putchar('A');

            // definir se é o vértice da coluna da direita
           // condição: ser o último da primeira linha ou último número da segunda coluna 
           // ou seja, x = 1 pra primeira linha e o último número de y 
	   // os dois contadores chegam no valor que o usuário colocou
			else if ((p == x && r == 1) || (p == 1 && r == y))
				ft_putchar('C');

            // definir os caracteres da linha
			
			else if ((p == 1) || (p == x) || (r == 1) || (r == y))
				ft_putchar('B');

            // se não for nenhum desses casos, deixar um expaço em branco
            // assim que o centro do polígono fica vazio, formando o polígono    
			else
				ft_putchar(' ');

            // aumentar o valor de p, até que ele chegue em x
			p++;
		}

        // terminou de analisar a linha de x, pula uma linha para o próximo de y
		ft_putchar('\n');
        
        // aumentar o valor de r, até que ele chegue em y
		r++;
	}
}
