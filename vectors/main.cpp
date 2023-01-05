//
//  main.cpp
//  vectors
//
//  Created by David Acevedo on 5/01/23.
//

#include <iostream>
using namespace std;

int main() {
   
    float monthsArray[6] = {100,220,300,900,200,250};
    float total = monthsArray[0] + monthsArray[1] + monthsArray[2] + monthsArray[3] + monthsArray[4] + monthsArray[5];
    float average = total /6;
    float inTwoYears = average * 24;
    cout << "total = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "inTwoYears = " << inTwoYears << endl;
    
    //Calculate array size
    
    int numbers[] = {1,2,3,4,5};
    int numbersMemory = sizeof(numbers);
    int intsInMemory = sizeof(int);
    cout << "Array  -> " << numbersMemory << endl;
    cout << "int in memory -> " << intsInMemory << endl;
    cout << "elements in array -> " << numbersMemory/intsInMemory << endl;
    
    
    
    return 0;
}
