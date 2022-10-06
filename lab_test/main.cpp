//
//  main.cpp
//  lab_test
//
//  Created by Тарас Могила on 06.10.2022.
//

#include <iostream>
using namespace std;

int myFunction(int x,int y)
{
    return x+y;
}

int main() {

    int result = myFunction(3, 2);
    
    cout <<result<< endl;
    
    return 0;
}
