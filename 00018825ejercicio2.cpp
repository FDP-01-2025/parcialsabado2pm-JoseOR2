#include <iostream>
using namespace std;
int main(){
    int num;
     
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num > 0){
        cout << "El numero ingresado es positivo." << endl;
    }
    else if(num < 0){
        cout << "El numero ingresado es negativo." << endl;
    }
    else{
        cout << "El numero ingresado es cero." << endl;
    }
    

    return 0;
}