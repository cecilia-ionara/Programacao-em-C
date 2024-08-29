/**exercitando
imprimir conteúdos e respectivos enndereços:
num
p1
p2
*p1
*p2**/

#include<stdio.h>

int main(){
	int num=10, *p1, *p2;
	p1 = &num;
	p2 = p1; /** ja recebe o endereço direto mesmo sem usar &, pq o valor 
	guardaqdo em p1 ja eh um endereço, mas, ao mesmo tempo, ele recebe o 
	conteudo, basta usar * quando quiser exibir**/
	
	printf("\nNumero original: %i", num);
	printf("\nP1 (endereco guardado de num): %i", p1);
	printf("\nP2 (endereco guardado de p1(que eh o de num)): %i", p2);
	printf("\n*P1 (conteudo de num): %i", *p1);
	printf("\n*P2 (conteudo de p1): %i", *p2);
	printf("\n&P1 (endereco original): %i", &p1);
	printf("\n&P2 (endereco original): %i", &p2);	
	
	return 0;
}
