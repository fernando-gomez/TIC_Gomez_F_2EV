/*Arrays*/
using namespace std;
#include<iostream>
int main(){
    int a[5];
    int cont,salir;
    for (cont=0;cont<5;cont++){
        cout<<"Dime un numero: ";
        cin>>a[cont];
    }
    cout<<"VECTOR"<<endl;
    for (cont=0;cont<5;cont++){
        cout<<"a["<<cont<<"]="<<a[cont]<<endl;
    }
    cout<<"Pulse cualquier tecla pare terminar: ";
    cin>>salir;
    return 0;
}
