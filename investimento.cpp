//usar struct e vetores...
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


struct tInvestimento{
 float capital,taxaAnual,rendimento,montanteFinal,montante,juros;
int tempo;


// Montante ao final do período aplicado considerando juros simples,
void jurosSimples( float capital,float taxaAnual, int tempo)
{
    float rendimento = (capital * tempo * taxaAnual)/100;
    float montanteFinal = rendimento + capital;

    cout << "-------------APLICACAO JUROS SIMPLES ----------" << endl;
     cout << "\nO Montante final aplicado ao juros simples é\n" <<"          R$"<< montanteFinal<< "   reais"<<endl;
     cout << "Os juros total  é\n"<< "          R$"<<rendimento<< "   reais\n"<<endl;
   

}
//montante ao final do período considerando juros composto

void caluloMontante( float capital, int tempo, float taxaAnual)
{
  float montante = capital * pow ((1 + (taxaAnual/100)),tempo);

  cout << "-------------APLICACAO JUROS COMPOSTO ----------" << endl;
  cout << "\nO valor investido a juros composto será:\n "<<"          R$"<< montante << "   reais"<< endl;

  float juros = montante - capital;
  cout << "\nO juros total será:\n" <<"          R$"<< juros << "   reais"<<"\n"<< endl;

}
// conversão da taxa de juros de ao ano para ao mês

void jurosMesAno(float taxaAnual){
  
  // aplicando a formula de juros anuais para mensais.
  //(raiz de 12 de (1+taxaanual%))-1.
   
  float x = (1+(taxaAnual/100));
  //0.0833 é a divisao 1/12.
  float z = pow(x,0.083333);
  float y = z - 1;
  //multiplicando por 100 para sair em %.
  float w = y * 100;
  float taxaMensal = w;
 cout << "-------------CONVERSAO DAS TAXAS ANUAIS EM MENSAIS ----------\n" << endl;
  cout << taxaAnual <<"% ao ano convertido emm taxa mensal será:   "<< taxaMensal<< "%";

}
};