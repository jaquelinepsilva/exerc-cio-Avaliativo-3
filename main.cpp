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

float capital,taxaJuros,rendimento,montanteFinal,montante,juros;
int tempo;

// funçao juros simples.
float jurosSimples( float capital,float taxaJuros, int tempo)
{
    float rendimento = (capital * tempo * taxaJuros)/100;
    float montanteFinal = rendimento + capital;

    return montanteFinal;

}
//____________juros Composto_________________
float jurosComposto( float montante, float capital)
{
  float juros = montante - capital;
  return juros;
}
float caluloMontante( float capital, int tempo, float taxaJuros)
{
  float montante = capital *
  pow ((1 + (taxaJuros/100)),tempo);
  return montante;
}




int main() {
  inicio:
  cout << "\n\n.       * * * Investimentos * * *\n"<< endl;
  cout << "Digite o valor do Capital?:" << endl;
  cin >> capital;
  cout << "Digie o valor da Taxa de juros? "<< endl;
  cin >> taxaJuros;
  cout << "Durante quantos meses deseja aplicar o dinheiro?:"<< endl;
  cin >> tempo;

montanteFinal = jurosSimples(capital,taxaJuros, tempo);
  cout << "\nO Montante final aplicado ao juros simples é\n" << montanteFinal<< endl;

  montante = caluloMontante(capital, tempo,  taxaJuros);
cout << "\nO valor investido a juros composto será: "<< montante << endl;

juros = jurosComposto(montante, capital);
cout << "\nO juros total será:" << juros << endl;
}