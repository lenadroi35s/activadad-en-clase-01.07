#include <iostream>
using namespace std;
//potencia
double potencia (double base, double expo)
{
    int x;
    double mult;
    mult=1;

    for(x=1;x<=expo;x++)
    {
        mult= mult*base;
    }
    return mult;
}
//Factoria
double fac (double a){
    double b=1;
    for(int x=1;x<=a;x++)
        b = b * x;

    return b;
}
// Sumaserie
double sumaserie (double serie){
    double suma=0;
    suma= serie - (potencia(serie,3)/fac(3))
          + (potencia(serie,5)/fac(5))
          - (potencia(serie,7)/fac(7));
    return suma;
}
//funcion  que recibe parametros nombres y edad y devuelve un salido, indicando si es o no mayr de edad
string saludo(string nombre, int edad)
{
    string mens=" Bienvenido" + nombre;
    if(edad>=18)
        mens= mens + "Usted es mayor de edad";


    else
        mens= mens + "Usted es menor de edad";

    return mens;
}
//funcion que recibe como parametros el nombre de una persona, el dia y mes de nacimiento.
//La funcion debe devolver el nombre de la persona, indicando el signo del zodiaco al que pertenece,
//Acuario (21 de enero-18 de febrero)
//Piscis (19 de febrero-20 de marzo)
//Aries (21 de marzo - 20 de abril)
//Tauro (21 de abril - 21 de mayo)
//Géminis (22 de mayo - 21 de junio)
//Cáncer (22 de junio-22 de julio)
//Leo (23 de julio-23 de agosto)
//Virgo (24 de agosto-23 de septiembre)
//Libra (24 de septiembre-23 de octubre)
//Escorpio (24 de octubre-22 de noviembre)
//Sagitario (23 de noviembre-21 de diciembre)
//Capricornio (22 de diciembre-20 de enero)
string zodiacal(string nombre,int dia,int mes)
{
    string mesaje="Bienvenido " + nombre;

    if((mes==1 && dia>=21) || (mes==2 && dia<=18))
    {
        mesaje = mesaje+" tu signo es Acuario";
    }
    else
    {

        if((mes==2 && dia>=19) || (mes==3 && dia<=20))
        {
            mesaje = mesaje+" tu signo es Piscis";
        }
        else
        {
            if((mes==3 && dia>=21) || (mes==4 && dia<=20))
            {
                mesaje = mesaje+" tu signo es Aries";
            }
            else
            {
                if((mes==4 && dia>=21) || (mes==5 && dia<=21))
                {
                    mesaje = mesaje+" tu signo es Tauro";
                }
                else
                {
                    if((mes==5 && dia>=22) || (mes==6 && dia<=21))
                    {
                        mesaje = mesaje+" tu signo es Geminis";
                    }
                    else
                    {
                        if((mes==6 && dia>=22) || (mes==7 && dia<=22))
                        {
                            mesaje = mesaje+" tu signo es Cancer";
                        }
                        else
                        {

                            if((mes==7 && dia>=23) || (mes==8 && dia<=23))
                            {
                                mesaje = mesaje+" tu signo es Leo";
                            }
                            else
                            {
                                if((mes==8 && dia>=24) || (mes==9 && dia<=23))
                                {
                                    mesaje = mesaje+" tu signo es Virgo";
                                }
                                else
                                {
                                    if((mes==9 && dia>=24) || (mes==10 && dia<=23))
                                    {
                                        mesaje = mesaje+" tu signo es Libra";
                                    }
                                    else
                                    {
                                        if((mes==10 && dia>=24) || (mes==11 && dia<=22))
                                        {
                                            mesaje = mesaje+" tu signo es Escorpio";
                                        }
                                        else
                                        {
                                            if((mes==11 && dia>=23) || (mes==12 && dia<=21))
                                            {
                                                mesaje = mesaje+" tu signo es Sagitario";
                                            }
                                            else
                                            {
                                                if((mes==12 && dia>=22) || (mes==1 && dia<=20))
                                                {
                                                    mesaje = mesaje+" tu es Capricornio";
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return mesaje;
}
int main() {
    //potencia
    cout<<"el resultado es igual a "<<potencia(3,5)<<endl;
    double x,y;
    cout<<"Base "<<endl;
    cin>>x;
    cout<<"Exponente"<<endl;
    cin>>y;
    cout<<"el resultado es igual a "<<potencia(x,y)<<endl;
    //Factorial
    int valor;
    cout << "Ingrese un numero" << endl;
    cin>> valor;
    cout<<"El factorial de "<<valor<<" es "<<fac(valor)<<endl;
    //formula
    int n;
    cout<<"Ingrese un numero"<<endl;
    cin>> n;
    cout<<endl<<"El resultado es:  "<<sumaserie(n)<<endl;
    //nombre y edad
    string nom;
    int ed;
    cout<<"Ingrese su nombre"<<endl;
    cin>>nom;
    cout<<"Ingrese su edad"<<endl;
    cin>>ed;
    cout<<""<<endl<<saludo(nom,ed);
    cout<<""<<endl;
    //signo
    string nombree;
    int dia,mes;
    cout<<"Ingrese su nombre"<<endl;
    cin>>nombree;
    cout<<"Ingrese el dia de nacimiento  "<<endl;
    cin>>dia;
    cout<<"Ingrese el mes de nacimiento en numero "<<endl;
    cin>>mes;
    cout<<""<<zodiacal(nombree,dia,mes);
    return 0;
}
