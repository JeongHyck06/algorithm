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
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
