/* O aluno deverá criar uma biblioteca para cálculo de investimentos. Ela deverá ser composta por uma
estrutura, a qual será dado o nome de “tInvestimento”, e terá o formato de uma aplicação financeira simples
(Montante investido, taxa de juros ao ano e o período do investimento em anos).
A sua biblioteca deverá ter funções que executem as seguintes operações: Montante ao final do período
aplicado considerando juros simples, montante ao final do período considerando juros compostos e a
conversão da taxa de juros de ao ano para ao mês.*/
#include <iostream>
#include "investimento.cpp"


int main() {
  
  cout << "\n\n.       * * * Calculo de Investimentos * * *\n"<< endl;
  tInvestimento novoinvestmento;
  cout << "Digite o valor do Capital a ser investido?:" << endl;
  cin >> novoinvestmento.capital;
  cout << "Digite o valor da Taxa de juros ao ano? "<< endl;
  cin >> novoinvestmento.taxaAnual;
  cout << "Digite o periodo do investimentos em anos?:"<< endl;
  cin >> novoinvestmento.tempo;

  novoinvestmento.jurosSimples(novoinvestmento.capital,novoinvestmento.taxaAnual, novoinvestmento.tempo);
 

  novoinvestmento.caluloMontante(novoinvestmento.capital, novoinvestmento.tempo,  novoinvestmento.taxaAnual);

  novoinvestmento.jurosMesAno(novoinvestmento.taxaAnual);

}
