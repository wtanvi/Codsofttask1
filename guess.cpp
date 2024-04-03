#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main()
 {
    srand(time(0)); 

    int randomNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I have chosen a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber)
            cout << "Too low! Try again." << endl;
        else if (guess > randomNumber)
            cout << "Too high! Try again." << endl;
        else
            cout << "Congratulations! You guessed the number " << randomNumber << " correctly in " << attempts << " attempts." << endl;

    } while (guess != randomNumber);

    return 0;
}
