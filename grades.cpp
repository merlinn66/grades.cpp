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
        cout << "Good Job. You get an A+!!!!!!!" <<  endl;
    }

    if ( mark >= 80 && mark <= 89){
        cout << "Good Job, you get an A!!!!!!!!" << endl;
    }

    if ( mark >= 70 && mark <= 79){
        cout << "Good Job, you get an B!!!!!!!!" << endl;
    }

    if ( mark >= 60 && mark <= 69){
        cout << "You get an C!, better luck next time." << endl;
    }

    if ( mark >= 50 && mark <= 59){
        cout << "You got a D, try harder next time,  you can do it!" << endl;
    }

    if ( mark >= 40 && mark <= 49){
        cout << "You get an E, bad mark but you can always do better." << endl;
    }

    if ( mark >= 20 && mark <= 39){
        cout << "You get an F, disappointing, try much harder next time." << endl;
    } 

     if ( mark <= 19 ){
        cout << "F, tsk tsk tsk tsk" << endl;
    }

    cout << "_________________________________________________" << endl;
}



// a+ = 90 and above
// a = 80-89
// b = 70-79
// c = 60 - 69
// d = 50 - 59
// e = 40 -49
// f = 20 -39
// undeclared = below 20