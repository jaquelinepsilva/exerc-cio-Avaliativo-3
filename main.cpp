/* O aluno deverá criar uma biblioteca para cálculo de investimentos. Ela deverá ser composta por uma
estrutura, a qual será dado o nome de “tInvestimento”, e terá o formato de uma aplicação financeira simples
(Montante investido, taxa de juros ao ano e o período do investimento em anos).
A sua biblioteca deverá ter funções que executem as seguintes operações: Montante ao final do período
aplicado considerando juros simples, montante ao final do período considerando juros compostos e a
conversão da taxa de juros de ao ano para ao mês.*/
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

float capital,taxaAnual,rendimento,montanteFinal,montante,juros;
int tempo;

// Montante ao final do período aplicado considerando juros simples,
void jurosSimples( float capital,float taxaAnual, int tempo)
{
    float rendimento = (capital * tempo * taxaAnual)/100;
    float montanteFinal = rendimento + capital;

    
     cout << "\nO Montante final aplicado ao juros simples é\n" << montanteFinal<< endl;

}
//montante ao final do período considerando juros composto

void caluloMontante( float capital, int tempo, float taxaAnual)
{
  float montante = capital * pow ((1 + (taxaAnual/100)),tempo);
  cout << "\nO valor investido a juros composto será: "<< montante << endl;

  float juros = montante - capital;
  cout << "\nO juros total será:" << juros << endl;
 
}
// conversão da taxa de juros de ao ano para ao mês

void jurosMesAno(float taxaAnual){
  
  float x = (100+taxaAnual);
  float y =x/100;
  float w = 1/12;
  float z = pow(y, w);
  float taxaMensal = x;

  cout << taxaAnual <<"\n% "<< "Em taxa mensal será:   "<< taxaMensal<< "%";
}



int main() {
  
  cout << "\n\n.       * * * Calculo de Investimentos * * *\n"<< endl;
  cout << "Digite o valor do Capital?:" << endl;
  cin >> capital;
  cout << "Digie o valor da Taxa de juros? "<< endl;
  cin >> taxaAnual;
  cout << "Durante quantos anos deseja aplicar o dinheiro?:"<< endl;
  cin >> tempo;

  jurosSimples(capital,taxaAnual, tempo);
 

  caluloMontante(capital, tempo,  taxaAnual);

  jurosMesAno(taxaAnual);

}