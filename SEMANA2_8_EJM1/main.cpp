#include<iostream>

using namespace std;


int main(){

    string nombres[5];

    int edades[5];

    for(int i=0;i<5;i++){

        cout<<"Ingrese nombre "<<i<<":";

        cin>>nombres[i];

        cout<<"Ingrese edad "<<i<<":";

        cin>>edades[i];

    }

    float sum = 0;

    for(int i=0;i<5;i++){

        sum = sum + edades[i];

    }

    float prom = sum / 5;

    cout << "El promedio de edad es: "<< prom << endl;

    cout << "Los mayores al promedio son: ";

    for(int i=0;i<5;i++){

        if(edades[i] > prom){

            cout << nombres[i] << endl;

        }

    }

    return 0;

}

