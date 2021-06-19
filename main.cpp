/* O aluno deverá criar uma biblioteca para cálculo de investimentos. Ela deverá ser composta por uma
estrutura, a qual será dado o nome de “tInvestimento”, e terá o formato de uma aplicação financeira simples
(Montante investido, taxa de juros ao ano e o período do investimento em anos).
A sua biblioteca deverá ter funções que executem as seguintes operações: Montante ao final do período
aplicado considerando juros simples, montante ao final do período considerando juros compostos e a
conversão da taxa de juros de ao ano para ao mês.*/
#include <iostream>
#include <stdio.h>

using namespace std;

float deposito,taxaJuros,rendimento,montanteFinal;

float jurosSimples( float deposito,float taxaJuros)
{
    float rendimento = (deposito * taxaJuros)/100;
    float montanteFinal = rendimento + deposito;

    return montanteFinal;

}




int main() {
  inicio:
  cout << "\n\n.       * * * Investimentos * * *\n"<< endl;
  cout << "Digite o valor do deposito:\n" << endl;
  cin >> deposito;
  cout << "Digie o valor da Taxa de juros? \n"<< endl;
  cin >> taxaJuros;

montanteFinal = jurosSimples(deposito,taxaJuros);


  cout << "O Montante final é:\n" << montanteFinal<< endl;

}