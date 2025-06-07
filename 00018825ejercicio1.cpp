#include <iostream>
using namespace std;
int main(){

    int num, primo;


    cout << "Ingrese el numero: ";
    cin >> num;
    cout << "Los primeros " << num << " numeros primos son: " << endl;

    for (int i = 0; i < num; i++)
    {
        int primo = (2 * i) + 1; 
        cout << primo << endl;
    }
    

    return 0;
}