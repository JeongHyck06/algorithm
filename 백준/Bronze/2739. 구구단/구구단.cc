//
//  main.cpp
//  algorithm
//
//  Created by 임정혁 on 8/23/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for(int i = 1; i <= 9; i++){
        cout << n << " * " << i << " = " << i*n << endl;
    }
}

