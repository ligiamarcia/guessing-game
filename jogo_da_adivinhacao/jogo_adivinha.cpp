
#include<iostream>
using namespace std; //avisando que vou usar váŕias funções "standard", não preciso ficar escrevendo std toda vez que vou usar uma função padrão std

int main(){
     

    int chute;
    int tentativa = 0;



    // para compilar o programa em cpp: g++ nome_do_programa.cpp -o nome_para_compilação.out
    //   ./t1.out
    //std:: <<endl      quer dizer que quero pular uma linha
    cout <<"********************************************" << endl;//declarar que vou usar o cout antes de usa-lo, sempre usar antes 
    cout <<"*Sejam bem-vindos ao jogo de adivinhação ! *"<< endl;
    cout <<"********************************************"<< endl;// a função cout imprimi na tela

    const int SECRET_NUMBER = 65;  //não estamos mudando essa variável , ou seja ela é uma constante
   // cout <<"O número secreto é "<<SECRET_NUMBER  << "! Não conte a ninguém! " <<endl; //quebra a mensagem pra imprimir a variável
    
    bool nao_acertou = true;

    while (nao_acertou){
        tentativa++;
        cout <<"Tentativa numero " << tentativa <<endl;
        cout <<"Qual o se chute?" <<endl;
        cin >> chute;
        cout << "O valor do seu chute é "<< chute << endl;

        bool acertou = chute == SECRET_NUMBER;
        bool maior = chute < SECRET_NUMBER;


        if(acertou){
            cout <<"Parabéns!!!! vocẽ ACERTOOOOU o número secreto!!!" <<endl;
            nao_acertou = false;

        }else if (maior)
        {
            cout <<" Seu chute foi MENOR do que o número secreto :(" <<endl;
        }else{
            cout << "Seu chute foi MAIOR do que o número secreto :(" <<endl;

        }
    }
     cout << "GAME OVER !!!!!" <<endl <<endl;
     cout <<"Você acertou o número secreto em " << tentativa << " tentativas" <<endl;
}
