
#include <iostream>

using namespace std;

int main() {
    int values [] = {16,23,45,12};
    int sizeArrray =  sizeof(values) / sizeof(int);
    for (int i = 0; i < sizeArrray - 1; i++) {
        for( int j = i+1; j < sizeArrray - i - 1; j++) {
            if (values[i] > values[j]){
                int temporalValue = values[j];
                values[j] = values[i];
                values[i] = temporalValue;
            }
        }
    }
    
    for (int i = 0; i <= sizeArrray; i++) {
        cout << values[i]<< endl;
    }
    
    return 0;
}

