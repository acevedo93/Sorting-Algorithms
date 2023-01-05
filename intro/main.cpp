
#include <iostream>

using namespace std;

int main() {
    
    int i, j, temp, sizeArray;
    cout << "Enter size of array " << endl;
    cin >> sizeArray;
    int values[sizeArray];
    
    cout << "enter array values"<< endl;
    
    // Load array
    for ( int k = 0; k < sizeArray; k++ ) {
        cout << "values of [" << k << "]" << endl;
        cin >> values[k];
    }
    
    for (i = 0; i < sizeArray-1; i++) {
        for ( j = 0; j < sizeArray-1; j++) {
            if (values[i] > values[i + 1]) {
                temp = values[i+1];
                values[i+1] = values[i];
                values[i] = temp;
            }
        }
    }
    
    //Show array
    
    cout << "Result with bubble sort" << endl;
    
    for (int i = 0; i <= sizeArray ; i++) {
        cout << values[i] << endl;
    }
    
   
    return 0;
}

