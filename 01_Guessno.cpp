/*  Create a program that generates a random number and asks the
    user to guess it. Provide feedback on whether the guess is too
    high or too low until the user guesses the correct number.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,randomnumber;
    cout<<"HINT - The number lies within a range of 0-99"<<endl;
    cout<<"Guess the number - "<<endl;

    srand(time(0));
    randomnumber = rand()%100;

    while (true)
    {
        cin>>n;
        if(randomnumber>n) cout<<"Too low !!"<<endl;
        else if (n>randomnumber) 
        {
            cout<<"Too high !!"<<endl;
        }
        else{
            int res1 = randomnumber - n; cout<<"You guessed it correctly !!1"<<endl;
            break;
        }
    }
    return 0;
}