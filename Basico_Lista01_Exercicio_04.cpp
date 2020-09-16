/*Escreva um programa que receba o peso e a altura de n pessoas e retorne:
  maior peso / menor peso / maior altura / menor altura
  media dos pesos / media das alturas / media dos imcs
  maior imcs / menor imc
  Classificação da média dos imcs (abaixo peso, peso ideal, sobrepeso, obesidadeI...)*/

#include <iostream>
#include <clocale> // setlocale
#include <cstdlib> // system
#include <string> // Textos em geral
#include <iomanip> //setprecision limitar casas decimais

using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
    int op, cont=0; 
    float peso, altura, IMC, mediapeso, mediaalt, mediaIMC, accpeso=0, accalt=0, accIMC=0;
    float menorpeso=999, maiorpeso=-999, menoralt=999, maioralt=-999, menorIMC=999, maiorIMC=-999;
    
    system("cls");
    system("color D");

    cout << fixed; //para fixar casas decimais
    
    do{
        cout << "\nInfome o peso: ";
        cin >> peso;
        cout << "Infome a altura: ";
        cin >> altura;
        accpeso+=peso;
        accalt+=altura;
        cont++;
        IMC = peso/ (altura*altura);
        accIMC+=IMC;

        if (peso > maiorpeso){
            maiorpeso = peso;
        }

        if (peso < menorpeso){
            menorpeso = peso;
        }

        if (altura > maioralt){
            maioralt = altura;
        }

        if (altura < menoralt){
            menoralt = altura;
        }

        if (IMC > maiorIMC){
            maiorIMC = IMC;
        }

        if (IMC < menorIMC){
            menorIMC = IMC;
        }

               
        cout << "Deseja acrescentar mais notas? \n1 - Sim \n2 - Não \n";
        cin >> op;     

    } while (op==1);
    
    mediapeso = accpeso/cont;
    mediaalt = accalt/cont;
    mediaIMC = accIMC/cont;


    cout << "O maior peso informado é: " << setprecision(2) << maiorpeso << endl;
    cout << "O menor peso informado é: " << setprecision(2) << menorpeso << endl;
    cout << "A maior altura informada é: " << setprecision(2) << maioralt << endl;
    cout << "A menor altura informada é: "<< setprecision(2) << menoralt << endl;
    cout << "O maior IMC informado é: " << setprecision(2) << maiorIMC << endl;
    cout << "O menor IMC informado é: " << setprecision(2) << menorIMC << endl;
    cout << "A média dos pesos informado é: " << setprecision(2) << mediapeso << endl;
    cout << "A média das alturas informado é: " << setprecision(2) << mediaalt << endl;
    cout << "A média de IMC informada é: " << setprecision(2) << mediaIMC << endl;
    
    if (mediaIMC <18.5)
        cout << "Abaixo do peso";
        else
        if((mediaIMC >=18.5) && (mediaIMC<24.9))
        cout << "Peso ideal";
            else
            if ((mediaIMC >=24.9) && (mediaIMC <29.9))
            cout << "Sobrepeso";
                else
                if ((mediaIMC >=30) && (mediaIMC <34.9))
                cout << "Obesidade grau I";     
                    else
                    if ((mediaIMC >=35) && (mediaIMC <39.9))
                    cout << "Obesidade grau II";   
                    else
                    cout << "Obseidade grau III (Mórbida)";                     
    cout << endl;
            
	system("pause");
	return 0;
}
