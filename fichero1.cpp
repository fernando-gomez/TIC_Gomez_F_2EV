//FICHEROS
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream fichero("Fichero.txt");
    fichero<<"En un lugar de la Mancha"<<endl;
    fichero<<"de cuyo nombre no quiero...";
    fichero.close();
    cout<<"Ya esta"; 
    return 0;
    }
