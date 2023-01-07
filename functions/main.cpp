
#include <iostream>
using namespace std;

void saludar_simple () {
    cout << "hola como estas" << endl;
}

void saludar_with_params (string param) {
    cout << param << endl;
}

string saludar_with_return  () {
    return "Hola mi nombre es david";
}

double factorial (int x) {
    short int i;
    double resultado = 0;
    for(int i = 0; i<=x; i++) {
        resultado *= i;
    }
    return resultado;
}

// functions with array

float calculate_average(int A[], short int n);
    
int main() {
    saludar_simple();
    saludar_with_params("soy david");
    string hi = saludar_with_return();
    cout<< factorial(5)<< endl;
    
    int n = 10;
    
    int array_to_test[] = {1,2,3,4,5,6,7,8,9,10};
    
    cout << &array_to_test[1] << endl;
    
    calculate_average(array_to_test, n);
    return 0;
}

float calculate_average(int A[], short int n) {
    float resultado, suma = 0;
    short int i;
    for(i = 0; i<n; i++) {
        suma += A[i];
    }
    resultado = suma / n;
    
    return resultado;
    
}


