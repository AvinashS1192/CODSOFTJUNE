#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber;
    int guess;
    int chances = 0;
    srand(time(0)); 
    //generating a random number
    randomNumber = rand() % 100 + 1; 
    cout << "\t\t\t We have selected a random number between 1-100. See if you can guess it\n\n";

    do
    {   // taking number from the user
        cout << "Enter your guess between 1 and 100: ";
        cin >> guess;
        chances++;
        // checking if the number is greater or smaller than the guessed number
        if (guess > randomNumber){
            cout << "OOPS SORRY !!! TRY A SMALLER NUMBER\n\n";
        }
        else if (guess < randomNumber){
            cout << "OOPS SORRY!!! TRY A GREATER NUMBER\n\n";
        }
        else{
            cout << "\nWOOHOO! You got the right guess in "<< chances << " tries!\n";
        }
    } 
        while (guess != randomNumber);

	return 0;
}