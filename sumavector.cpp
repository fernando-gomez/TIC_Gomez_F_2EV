using namespace std;
#include<iostream>
int main(){
    int a[5];
    int cont,salir,suma=0;
    for (cont=0;cont<5;cont++){
        cout<<"Dime un numero: ";
        cin>>a[cont];
    }
    cout<<"SUMA"<<endl;
    for (cont=0;cont<5;cont++){
        cout<<a[cont]<<"+"<<suma;
        suma=suma+a[cont];
        cout<<"="<<suma<<endl;
    }
    cout<<"La suma total es: ";
    cout<<suma<<endl;
    cout<<"Pulse cualquier tecla pare terminar: ";
    cin>>salir;
    return 0;
}
