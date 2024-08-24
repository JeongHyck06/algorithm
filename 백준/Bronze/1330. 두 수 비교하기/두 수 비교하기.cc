//
//  main.cpp
//  algorithm
//
//  Created by 임정혁 on 8/23/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    
    cin >> a >> b;
    if(a > b) {
        cout << ">" << endl;
    }
    else if (a < b){
        cout << "<" << endl;
    }
    else {
        cout << "==" << endl;
    }
}
