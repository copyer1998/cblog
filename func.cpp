//
// Created by HFUT-SOM on 2019/3/31.
//

#include "func.h"
#include <iostream>

using namespace std;
const int  MAZ=3;
int main() {
    int var[MAZ]={10,34,300};
    int *ptr;
    ptr=var;
    for (int i = 0; i < 3; ++i) {
        cout << "var ["<< i <<"]address";

    }
}