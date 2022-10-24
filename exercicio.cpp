#include<iostream>
#include<tuple>
using namespace std;

/* 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe
as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.
2. Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B.
A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função
não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B
na função ao principal.
3. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada
posição desse array.
4. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de
cada posição dessa matriz.
5. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de
ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
6. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima
o endereço das posições contendo valores pares.
7. Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável a e calcule e
exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve
ser usada para calcular o dobro, C o triplo e D o quádruplo.
8. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e
retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se
existirem valores diferentes. Exibir os valores ordenados na tela.
9. Escreva uma função que dado um número real passado como parâmetro, retorne à parte inteira e a parte
fracionaria deste número. Escreva um programa que chama a função Prototipo: void frac(float num, int*
inteiro, float* frac);

10. Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne
quantos números negativos há nesse array. Essa função deve obedecer ao protótipo: int negativos(float *vet,
int N);
11. Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras, min e max, e
armazene nessas variáveis o valor mínimo e máximo do array. Escreva também uma função ao main que use
essa função.
12. Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas
quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado
dinamicamente, contendo a união de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1
= {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. Assinatura da função: int* uniao(int *x1, int
*x2, int n1, int n2, int* qtd);
13. Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas
quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado
dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo
x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 6}. Assinatura da função: int* interseccao(int *x1, int
*x2, int n1, int n2, int *qtd);
14. Faça um programa que leia a quantidade de elementos n e crie dinamicamente um vetor de n elementos e
passe esse vetor para uma função que irá ler os elementos desse vetor. Depois, no programa principal, o vetor
preenchido deve ser impresso.
15. Analise o código abaixo e determine o valor das variáveis ao final da execução. int i=34,j; int *p; p = &i; *P++;
j = *p + 33; */

void questao01(int x, float y, char z);
void questao02(int a, int b);
void questao03();
void questao04();
void questao05(int *arrayApontado);
void questao06(int *arrayApontado);
void questao07();
int questao08(int st, int nd, int rd);
tuple<int, float>questao09(float num, int *inteiro, float *frac);
int questao10(float *vet, int n);
void questao11();
void questao13(int *x1, int *x2, int n1, int n2, int *qtd);

int main()
{
  // ------- q01 - 04 -------
  questao01(10, 12.5, 'a');
  questao02(15, 25);
  questao03();
  questao04();
  // ------- ------- -------

  // ------- q05 - 06 -------
  cout << "\n-- Questao 05 --\n";

  int arrayASerApontado[5];
  int *ptrArray = arrayASerApontado;

  for(int i = 0; i < 5; i++) {
    cout << "Insira um valor a ser armazenado na posição " << i << endl;
    cin >> arrayASerApontado[i];
  }
  
  questao05(ptrArray);
  questao06(ptrArray);
  // ------- ------- -------

  questao07();

  // ------- q08 -------
  cout << "\n\n-- Questao 08 --\nInsira tres valores inteiros: \n";

  int primeiro, segundo, terceiro, resultadoOrdem;
  
  cin >> primeiro >> segundo >> terceiro;

  resultadoOrdem = questao08(primeiro, segundo, terceiro);

  if (resultadoOrdem == 0) cout << "\nNumeros iguais.";
  // ------- --- -------

  // ------- q09 -------
  cout << "\n\n-- Questao 09 --\nInsira um numero real: ";

  float num;
  float *frac;
  int *inteiro;

  cin >> num;

  auto [retornoInt, retornoFrac] = questao09(num, inteiro, frac);

  cout << "\nParte inteira: " << retornoInt << "\nParte fracionaria: " << retornoFrac << endl; 
  // ------- --- -------

  // ------- q10 -------
  cout << "\n\n-- Questao 10 --\n";

  cout << "Insira o tamanho do array: ";

  int n;
  cin >> n;

  float arrayDeReais[n];
  float *vet = arrayDeReais;

  cout << "\nInforme os elementos do array (numeros reais)\n";
  for(int i = 0; i < n; i++) {
    cin >> arrayDeReais[i];
  }

  int contador = questao10(vet, n);

  cout << "Quantidade de negativos: " << contador << endl;
  // ------- --- -------

  questao11();

  int x1[] = {1, 3, 5, 6, 7};
  int x2[] = {1, 3, 4, 6, 8};

  int n1 = sizeof x1/sizeof x1[0];
  int n2 = sizeof x2/sizeof x2[0];

  int *qtd;

  questao13(x1, x2, n1, n2, qtd);

  return 0;
}

void questao01(int x, float y, char z) {
    int *ptrInt = &x;
    float *ptrFlt = &y;
    char *ptrChr = &z;

    cout << "-- Questao 01 --\nValores iniciais\n" << "X = " << x << "\nY = " << y << "\nZ = " << z << endl;

    *ptrInt = 15;
    *ptrFlt = 25.2;
    *ptrChr = 'b';
  
    cout << "\nNovos valores\n" << "X = " << x << "\nY = " << y << "\nZ = " << z << endl;
}

void questao02(int a, int b) {
  cout << "\n\n-- Questao 02 --\nValores iniciais\n" << "A = " << a << "\nB = " << b << endl;
  int soma = a + b;
  int *ptr = &a;
  *ptr = soma;
  cout << "\nNovos valores\n" << "A = " << a << "\nB = " << b << "\nSoma = " << soma << endl;
}

void questao03() {
  cout << "\n\n-- Questao 03 --\n";
  float z[10];
  for(int i = 0; i < 10; i++) {
    z[i] = 2.45;
    cout << "Endereço de Z na posição " << i << " = " << &z[i] << endl;
  }
  cout << endl;
}

void questao04() {
  cout << "\n\n-- Questao 04 --\n";
  float z[3][3];
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      z[i][j] = 2.5;
      cout << "Endereço de Z na posição " << i << "x" << j << " = " << &z[i][j] << endl;
    }
  }
  cout << endl;
}

void questao05(int *arrayApontado) {
  cout << endl;
  for(int i = 0; i < 5; i++) {
    cout << "Dobro do valor na posição " << i << " = " << arrayApontado[i] * 2 << endl;
  }
}

void questao06(int *arrayApontado) {
  cout << "\n\n-- Questao 06 --\n";
  for(int i = 0; i < 5; i++) {
    if (arrayApontado[i] % 2 == 0) {
        cout << "Endereço do valor na posição " << i << " = " << &arrayApontado[i] << endl;
    }
  }
}

void questao07() {
  int a;
  int *ptrDobro = &a;

  cout << "\n\n-- Questao 07 --\nInsira um valor para dobrar, triplicar e quadruplicar: ";
  cin >> a;

  int *b = ptrDobro;
  int **c = &b; 
  int ***d = &c;

  cout << "B dobrado: " << *b*2 << "\nC triplicado: " << **c*3 << "\nD quadruplicado: " << ***d*4 << endl;
}

int questao08(int st, int nd, int rd) {
  int aux = 0;

  //321
  if ((st > nd) && (nd > rd)) {
    aux = st;
    st = rd;
    rd = aux;

  //312
  } else if ((st > rd) && (nd < rd)) {
    aux = nd;
    nd = rd; 
    rd = st; 
    st = aux; 

  //132
  } else if ((st < rd) && (nd > rd)) {
    aux = rd;
    rd = nd;
    nd = aux;
  
  //231
  } else if ((st < nd) && (nd > rd)) {
    aux = nd;
    nd = st;
    st = rd;
    rd = aux;

  //213
  } else if ((st > nd) && (nd < rd)) {
    aux = nd;
    nd = st;
    st = aux;

  //313
  } else if ((st > nd) && (st == rd)) {
    aux = nd;
    nd = st;
    st = aux;

  //331
  } else if ((st > rd) && (nd == st)) {
    aux = rd;
    rd = st;
    st = aux;
  }
  
  //123 nao eh necessario

  cout << "\nNumeros em ordem: \n" << st << nd << rd << endl;


  if ((st == nd) && (nd == rd)) return 0;
  else return 1;
}

tuple<int, float>questao09(float num, int *inteiro, float *frac) {
  int auxInt = int(num);
  inteiro = &auxInt;

  float auxFrac = (num - *inteiro);
  frac = &auxFrac;

  return {*inteiro, *frac};
}

int questao10(float *vet, int n) {
  int count = 0;

  for(int i = 0; i < n; i++) {
    if (vet[i] < 0) {
      count++;
    }
  }

  return count;
}

void questao11() {
  cout << "\n\n-- Questao 11 --\n";
  cout << "Determine o tamanho da array: ";

  int n;
  cin >> n;

  int *V[n];

  cout << "\nInsira dois numeros inteiros\n";

  int min, max;
  cin >> min >> max;


  for(int i = 0; i < n; i++) {
    if (i == 0) {
      V[i] = &min;
      cout << "\nAnexado a posicao do primeiro inteiro em: " << i << endl;
    }

    if (i == n - 1) {
      V[i] = &max;
      cout << "Anexado a posicao do segundo inteiro em: " << i << endl;
    }
  }
}

void questao13(int *x1, int *x2, int n1, int n2, int *qtd) {
  cout << "\n\n-- Questao 13 --\nIntersecao: \n";
  *qtd = 0;
  for (int i = 0; i < n1; i++) {
    if (x1[i] == x2[i]) {
      *qtd+=1;
    }
  }

  int x3[*qtd];
  int aux = 0;

  for(int i = 0; i < n1; i++) {
    if (x1[i] == x2[i]) {
      x3[aux] = x1[i];
      aux++;
    }
  }

  for(int i = 0; i < *qtd; i++) {
    cout << x3[i] << " ";
  }
}