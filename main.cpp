//
//  main.cpp
//  Intro to conditional statements- hackerrank
//
//  Created by Sarahi Cardenas Trejo on 11/14/19.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//
#include <iostream>
using namespace std;


void even(int N){
    double division = N%2;
    if (division == 0 && N>=2 && N<5){
        cout << "Not weird(2 and 5)" << endl;
    }else if (division == 0 && N>20){
        cout << "Not weird(N>20)" << endl;
    }else if(division == 0 && N>=6 && N<=20){
        cout << "Weird (6 and 20)" << endl;
    }
}
void odd(int N){
    double division = N%2;
    if (division != 0){
        cout << "Weird(odd)"<< endl;
    }
}
int main()
{
    int N;
    cout << "Enter a number: " << endl;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    even(N);
    odd(N);
    
    
    return 0;
}
