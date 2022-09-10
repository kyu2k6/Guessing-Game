//Kevin Yu
//9-9-22
//Guessing game where you try to guess a random number

//3 rules:
//1. No global variables.
//2. No strings.
//3. Include <iostream>, not stdio.

#include <iostream>
#include <time.h>

using namespace std; //I don't have to do std:: every single time now

int main() {
    char play = 'y';
    while (play == 'y') { 
    	cout << "Generating a number between 0 and 100" << endl;
   	srand(time(NULL)); //Initialize the generator
    
        int counter = 0;
    	int number = rand() % 100; //Randomly chooses a number from 0 to 100
    	int guess = -1; //Set as -1 since -1 isn't a possible value

    	while (guess != number) {
     	    cout << "Input a number please: ";
	    counter++;
	    cin >> guess; //Takes in the guess
	    if (guess == number) {
	        cout << "Correct!" << endl;
	        cout << "This is how many time you guessed: " << counter << endl;
	        cout << "Play again? ";
		cin >> play;
	    }
	    else if (guess < number) {
	        cout << "Too small" << endl;
	    }
	    else {
	        cout << "Too big" << endl;
 	    }
        }
    cout << "Thank you for playing!" << endl;
    }

    return 0;   
}




