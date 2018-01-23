//Lectura de ficheros hasta el final
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int salir;
    string linea;
    ifstream fichero("C:/Users/inforbach1/Desktop/icheroAgenda.txt");/*abrir un 
    fichero y volcarlo , nombre con el que lo tratar ("nombrederuta.txt")*/
    
    /*Esta linea hace: Busca la ruta al que le llamemos, si no ponemos c:/ y la 
    ruta, se guardara donde guardemos los programas, Lee del disco duro el 
    fichero, coje una zona de la memoria dinamica, reserva un trozo, le llama 
    fichero y lo lee en RAM*/
    
    /*tipos de fichero: simple, de texto, bloc de notas utiliza normal, 
    otros programas formato propio, no solo son letras*/
    if (fichero.fail()==1){
       cout<< "ERROR. No existe una ruta"; 
       cin>> salir;  
       exit(1);                    
    }
    while(fichero.eof()==0){
            getline(fichero,linea); /*va a ese otro de la emoria ram hasta que 
            encuentra un /n, retorno de carro, y definira esa linea como 
            una variable*/
            cout<<linea<<endl;
            }
    fichero.close(); //No haria falta cerrarlo//
    cin>>salir;
    return 0;
    }
