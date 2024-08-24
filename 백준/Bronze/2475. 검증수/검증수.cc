//
//  main.cpp
//  algorithm
//
//  Created by 임정혁 on 8/23/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    
    int cnt = (a*a + b*b + c*c + d*d + e*e)%10;
    
    cout << cnt;
}
