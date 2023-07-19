#include <iostream>
using namespace std;

int main(){
    //criteria for grading
     cout<<"100 - 90->	A+\n";
     cout<<"90 - 80	->    A\n";  
     cout<<"80 - 70	->    B+\n";
     cout<<"70 - 60 ->    B\n";   
     cout<<"60 -50  ->    C\n";
     cout<<"50 - 40	->    D\n";
     cout<<"40 - 30 ->    E\n"; 
     cout<<"30 - 0	->    F\n";
    int marks;
    // taking users marks 
    cout<<"Enter Your Marks: ";
    cin>>marks;
    // checking the criteria for the grade
    if (marks >= 90){
        cout<<"Your Grade is A+";
    }
    else if (marks >= 80){
        cout<<"Your Grade is A";
    }
    else if (marks >= 70){
        cout<<"Your Grade is B+";
    }
    else if (marks >= 60){
        cout<<"Your Grade is B";
    }
    else if (marks >= 50){
        cout<<"Your Grade is C";
    }
    else if (marks >= 40){
        cout<<"Your Grade is D";
    }
    else if (marks >= 30){
        cout<<"Your Grade is E";
    }
    else if (marks <= 30){
        cout<<"Your Grade is F";
    }
    else{
        cout<<"Enter Valid Marks";
    }
    return 0;
}