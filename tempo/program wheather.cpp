//PARA CONVERTER TEMPERATURAS C, F OU K.
#include<iostream>
#include<clocale>

using namespace std;
//GLOBAL

//FUN��O PARA TRANFORMAR GRAUS CELCIUS EM FAHRENHEIT OU KELVIM
float celcius(float C){
    float temp; int escolha;

        cout<<"Digite 1 para F ou 2 para K, para realizar o calculo das temperaturas:"<<endl;
        cin>>escolha;
        system("cls");

    switch(escolha){
        case 1:

         cout<<"Informe o valor em Celcius:";
         cin>>temp;
         system("cls");

         C = (temp*1.8) + 32;
         cout<< "O valor da temperatura em Fahrenheit � igual � "<< C<<"�F"<<endl;

        break;

        case 2:

         cout<<"Informe o valor em Celcius:";
         cin>>temp;
         system("cls");

            C = temp + 273;

         cout<<"O valor da temperatura em Kelvin � igual � "<< C<<"�K"<<endl;

        break;

    default:

        celcius(C);
    }


return C;
}

//FUN��O PARA TRANFORMAR FAHRENHEIT EM CELCIUS OU KELVIN.

float fahrenheit(float F){

    float temp; int escolha;

    cout<<"Digite 1 para C ou 2 para K, para realizar o calculo das temperaturas:" << endl;
    cin>>escolha;


     switch(escolha){
        case 1:

         cout<<"Informe o valor em Fahrenheit:";
         cin>>temp;
         system("cls");

         F = (temp-32)/1.8;
         cout<< "O valor da temperatura em C � igual � "<< F<<"�C"<<endl;


        break;

        case 2:

         cout<<"Informe o valor em Fahrenheit:";
         cin>>temp;
         system("cls");

             F = (temp + 459.67)*5/9;

         cout<<"O valor da temperatura em Kelvin � igual � "<< F<<"�K"<<endl;

        break;

     default:

        fahrenheit(F);

    }

return F;
}

//FUN��O PARA TRANSFORMAR KELVIN EM CELCIUS OU FAHRENHEIT.

float kelvin(float K){

        float temp; int escolha;

    cout<<"Digite 1 para C ou 2 para F, para realizar o calculo das temperaturas." << endl;
    cin>>escolha;


     switch(escolha){
        case 1:

         cout<<"Informe o valor em Kelvin:";
         cin>>temp;
         system("cls");

         K = (temp-273);
         cout<< "O valor da temperatura em C � igual � "<< K<<"�C"<<endl;


        break;

        case 2:

            cout<<"Informe o valor em Kelvin:";
            cin>>temp;
            system("cls");

             K = (temp-32)/9;

            cout<<"O valor da temperatura em F � igual � "<< K<<"�F"<<endl;

        break;

     default:

        cout<<"Valor inv�lido."<<endl;
        system("cls");
        kelvin(K);
     }
return K;
}

//PROCEDIMENTO PARA CHAMAR AS FUN��ES REQUISITADAS
chamada(){
    int escolha;
    float C, F, K;
    cout<< "--------------------------------------"<<endl;
    cout<< "INFORME A CONVERS�O QUE DESEJA EFETUAR"<<endl;
    cout<< "--------------------------------------"<<endl;
    cout<< "1-Celcius"<<endl;
    cout<< "2-Fahenright"<<endl;
    cout<< "3-Kelvin"<<endl;
    cout<< "--------------------------------------"<<endl;
    cin>>escolha;
    system("cls");

    switch(escolha){
        case 1:

            celcius(C);

        break;

        case 2:

            fahrenheit(F);

        break;

        case 3:

            kelvin(K);

        break;

    default:

        chamada();
    }


}

//PRINCIPAL
int main(){
    setlocale(LC_ALL,"Portuguese");

    chamada();


return 0;
}
