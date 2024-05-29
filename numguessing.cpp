//Number Guessing Game

using namespace std;
#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){
    srand(time(0));//seed a random number
    int lower = 1;
    int upper = 100;

// To Generate a random number
    int randomnum = rand() % 100 + lower;
    int guess;
    bool ans = false;

    cout << "Hey , Welcome !"<<endl;
    cout<<"Guess the number between "<<lower<<" and "<<upper<< ": ";

// Loop until the user guesses correctly
    while(!ans){
        cin>>guess;
        if (guess < randomnum) {
        cout << "Too low. Try again: ";
    } else if (guess > randomnum) {
        cout << "Too high. Try again: ";
    } else {
        ans = true;
    }
  }

    cout << "Congratulations! You guessed the right number!" << endl;

    return 0;
}