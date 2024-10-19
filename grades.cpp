#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cout << "Welcome to the grading system, you will soon be prompted to enter your marks." << endl;

    int mark;
    cout << "Enter marks in percentage: ";
    cin >> mark;

    cout << "_________________________________________________" << endl;
    cout << "\n";

    if( mark >= 90 ){
        cout << "Good Job. You get an A+!!!!!!!" <<  endl; // 90 and up
    }

    if ( mark >= 80 && mark <= 89){
        cout << "Good Job, you get an A!!!!!!!!" << endl; // 80-89
    }

    if ( mark >= 70 && mark <= 79){
        cout << "Good Job, you get an B!!!!!!!!" << endl; // 70-79
    }

    if ( mark >= 60 && mark <= 69){
        cout << "You get an C!, better luck next time." << endl; // 60-69
    }

    if ( mark >= 50 && mark <= 59){
        cout << "You got a D, try harder next time,  you can do it!" << endl; // 50-59
    }

    if ( mark >= 40 && mark <= 49){
        cout << "You get an E, bad mark but you can always do better." << endl; // 40-49
    }

    if ( mark >= 20 && mark <= 39){
        cout << "You get an F, disappointing, try much harder next time." << endl; // 20-39
    } 

     if ( mark <= 19 ){
        cout << "F, tsk tsk tsk tsk" << endl; // under 20
    }

    cout << "_________________________________________________" << endl;
}


// guide
// a+ = 90 and above
// a = 80-89
// b = 70-79
// c = 60 - 69
// d = 50 - 59
// e = 40 -49
// f = 20 -39
// undeclared = below 20
