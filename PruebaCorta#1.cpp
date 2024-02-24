#include <iostream>
using namespace std;

int main() {

//DETERMINAR SI ES VOCAL O CONSONANTE

    char L;
    cout<<"Ingrese una Letra: "; cin>>L;

    if(L =='a' || L =='e' || L =='i' || L =='o' || L =='u'){
        cout<<"La letra ingresada es vocal";
    } else cout<<"La letra ingresada es consonante";
    cout<<"\n";

//SUMAR NUMEROS HASTA QUE LA SUMA SEA 100

    int x,n=100,s=0;

    while(s<=n)
    {
        cout<<"ingresar numero:";
        cin>>x;
        s=s+x;
    }
    cout<<"La suma de los numeros es:"<<s;
    cout<<"\n";

//IMPRIMIR NUMEROS PRIMOS 1-50

    for (int i = 0; i <= 50; i += 2){
        cout<<i<<endl;
    }


    return 0;
}
