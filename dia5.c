#include <stdio.h>
#include <stdlib.h>

int menu();
void quadrado();
void retangulo();
void triangulo();


int main()
{
    int senha, userid;
    char sn, op;
    system("clear");
    printf("Seja bem vindo ao sistema de calculo de área de polígonos\n\n");
    op = menu();
    if (op==1) quadrado();
    if (op==2) retangulo();
    if (op==3) triangulo();
while(op!=4);
    return 0;
}

 

    

int menu()
{
    int op;
    printf("Menu de opções");
    printf("\n1.Quadrado");
    printf("\n2.Retangulo");
    printf("\n3.Triangulo");
    printf("\n4.Encerrar");
    printf("\nSua opção");
    scanf("%d", &op);
    fflush(stdin);
    return op;
}
void quadrado()
{
    float m1, area, perimetro;
    system("clear");
    printf("Calculando a area de um quadrado");
    printf("\n\n Digite o comprimento do lado");
    scanf("%f", &m1);
    area = m1 * m1;
    perimetro = 4 * 1;
    printf("\n\nArea: %f", area);
    printf("\nPerimetro: %f", perimetro);
}

  void retangulo() 
 {
  float m1, m2, area, perimetro;
    system("clear");
    printf("Calculando a area de um retangulo");
    printf("\n\n Digite o comprimento do lado");
    scanf("%f", &m1);
    printf("\n\n Digite o comprimento do outro lado");
    scanf("%f", &m2);
    area = m1*m2;
    perimetro = 2*1 + 2*m2;
    printf("\n\nArea: %f", area);
    printf("\nPerimetro: %f", perimetro);
 } 
  void triangulo() 
 {
  float m1, m2, area, perimetro;
    system("clear");
    printf("Calculando a area de um triangulo");
    printf("\n\n Digite o comprimento do lado");
    scanf("%f", &m1);
    printf("\n\n Digite o comprimento do outro lado");
    scanf("%f", &m2);
    area = (m1*m2) /2;
    perimetro= m1+m1+m1;
    printf("\n\nArea: %2f", area);
    printf("\nPerimetro: %f", perimetro);  

}

