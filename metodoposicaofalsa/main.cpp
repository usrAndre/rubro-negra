//CIC250-Calculo Numerico para Computaçao
//Exercicio Pratico 02-27/03/19
//22633- Andre Luiz Rodrigues da Silva
//
//// Calculo de raizes reais de funcoes reais – metodo da posicao falsa

#include <iostream>
#include <cmath>
using namespace std;

//funcao f(x)
double funcao (double x){


return (x*x*abs(cos(sqrt(x,2)))-5);

}
main(){
    double a, b, c, e, f_a, f_b, f_c, erro, aux, i=0;

    cout<<"\nDigite o valor de 'a':"<<endl;
    cin>>a;
    cout<<"\nDigite o valor de 'b':"<<endl;
    cin>>b;
    cout<<"\nInforme a precisao desejada:"<<endl;
    cin>>e;
    if(a>b){ //funcao para que b seja sempre maior que a
        aux=a;
        a=b;
        b=aux;
    }
    if(a==b){ // condição para que nao seja inserido mesmo valor
        cout<<"\nOs valores devem ser diferentes. Digite um novo valor para 'b':"<<endl;
        cin>>b;
        }
    else{


        f_a=funcao(a);
        f_b=funcao(b);

        if(f_a*f_b<0){ //  condição para existir uma raiz no intervalo
                c=(a*f_b-b*f_a)/(f_b - f_a); //Metodo da Posição Falsa
                f_c=funcao(c);
                     erro=abs(b-a);
                     i++;
                     while(e<=abs(f_c) and e<=erro){
                             i++;
                             if(f_a*f_c<0){
                                 b=c;
                                     }
                             if(f_b*f_c<0){
                                 a=c;
                           }
                           erro=abs(b-a);
                           f_a=funcao(a);
                           f_b=funcao(b);
                           c=(a*f_b-b*f_a)/(f_b - f_a);
                           f_c=funcao(c);


                   }
                        cout<<"\nraiz : "<<c<<endl;
                        cout<<"\nerro : "<<erro<<endl;
                        cout<<"\n numero de iteracoes : "<<i<<endl;

                }

         else cout<<"\nEsse intervalo nao possui raizes"<<endl;
        }


    }
