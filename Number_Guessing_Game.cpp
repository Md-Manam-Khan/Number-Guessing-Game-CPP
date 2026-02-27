#include<bits/stdc++.h>
#include<random>
#include<chrono>
using namespace std;
using namespace std::chrono;
class counter
{
    private:
    long long streak3;
    public:
    void setWinStreak(long long streak1)
    {
        streak3 = streak1;
    }
    void setLossStreak(long long streak1)
    {
        streak3 = 0;
    }
    long long getStreak ()
    {
        return streak3;
    }
};
int main ()
{
    ios::sync_with_stdio(false);
    counter s;
    long long x, diff, choice1, choice2, round, randomNumber, upperLimit, streak1 = 0, attempt;
    bool streak = false;
    string guess;
    random_device rd;
    mt19937 gen(rd());
    cout<<"\tWelcome"<<endl<<endl;
    cout<<"This is a random number selection game";
    cout<<endl<<endl<<"Rules: "<<endl;
    cout<<endl<<"1. As the game starts, one random number will be generated through AI in between 1 to upper limit.";
    cout<<endl<<"2. Choose how many times you are going to guess.";
    cout<<endl<<"3. Pick a number as per your guess.";
    cout<<endl<<"4. AI will show your prediciton being accurate, or the offset.";
    cout<<endl<<endl<<"\tUnderstood.... Let's gooooo!";
    manam:
    cout<<endl<<endl<<"Start game\n1. Yes\n2. No\n\nI choose: ";
    cin>>choice1;
    switch (choice1)
    {
        case 1:
        {
            manam1:
            cout<<endl<<endl<<"Choose difficulty:\n1. Easy\n2. Medium\n3. Hard";
            cout<<endl<<"4. Custom\n\nI choose: ";
            cin>>diff;
            auto start = high_resolution_clock::now();
            switch (diff)
            {
                case 1:
                {
                    attempt = 0;
                    if (streak1 > 0)
                    {
                        cout<<endl<<"Current streak: "<<streak1;
                    }
                    cout<<endl<<"You have 20 guesses";
                    round = 20;
                    cout<<endl<<"Digit Limit: 1 to 100"<<endl;
                    uniform_int_distribution <> dist(1, 100);
                    randomNumber = dist(gen);
                    while(round--)
                    {
                    attempt++;
                    cout<<endl<<"My guess: ";
                    cin>>guess;
                    if (guess == "ManamKnowsTheNumber")
                    {
                        cout<<endl<<"The number is: "<<randomNumber;
                        round++;
                        if (attempt != 0)
                        {
                            attempt --;
                        }
                        else
                        {
                            attempt = 0;
                        }
                    continue;
                    }
                    try
                    {
                        x = stoi(guess);
                    }
                    catch(...)
                    {
                        cout << "Invalid number! Try again." << endl;
                        round++;
                        continue;
                    }
                    if (x == randomNumber)
                    {
                        if (randomNumber % 2 == 0)
                        {
                            cout<<endl<<"\033[5;32mCongratulations\033[0m"<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\033[5;32mAwesome\033[0m"<<endl;
                        }
                        streak = true;
                        streak1++;
                        s.setWinStreak(streak1);
                        break;
                    }
                    else if (x > randomNumber)
                    {
                        cout<<endl<<"Your guess is \033[5;31mhigher\033[0m than the random number"<<endl;
                    }
                    else
                    {
                        cout<<endl<<"Your guess is \033[5;31mlower\033[0m than the random number"<<endl;
                    }
                   cout<<endl<<"Guess remaining: "<<round<<endl;
                    }
                    break;
                }
                case 2:
                {
                    attempt = 0;
                    if (streak1 > 0)
                    {
                        cout<<endl<<"Current streak: "<<streak1;
                    }
                    cout<<endl<<"You have 15 guesses";
                    round = 15;
                    cout<<endl<<"Digit limit: 1 to 1000"<<endl;
                    uniform_int_distribution <> dist(1, 1000);
                    randomNumber = dist(gen);
                    while(round--)
                    {
                    attempt++;
                    cout<<endl<<"My guess: ";
                    cin>>guess;
                    if (guess == "ManamKnowsTheNumber")
                    {
                        cout<<endl<<"The number is: "<<randomNumber;
                        round++;
                        if (attempt != 0)
                        {
                            attempt --;
                        }
                        else
                        {
                            attempt = 0;
                        }
                    continue;
                    }
                    try
                    {
                        x = stoi(guess);
                    }
                    catch(...)
                    {
                        cout << "Invalid number! Try again." << endl;
                        round++;
                        continue;
                    }
                    if (x == randomNumber)
                    {
                        if (randomNumber % 2 == 0)
                        {
                            cout<<endl<<"\033[5;32mFlawless\033[0m"<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\033[5;32mSplendid\033[0m"<<endl;
                        }
                        streak = true;
                        streak1++;
                        s.setWinStreak(streak1);
                        break;
                    }
                    else if (x > randomNumber)
                    {
                        cout<<endl<<"Your guess is \033[5;31mhigher\033[0m than the random number"<<endl;
                    }
                    else
                    {
                        cout<<endl<<"Your guess is \033[5;31mlower\033[0m than the random number"<<endl;
                    }
                   cout<<endl<<"Guess remaining: "<<round<<endl;
                    }
                    break;
                }
                case 3:
                {
                    attempt = 0;
                    if (streak1 > 0)
                    {
                        cout<<endl<<"Current streak: "<<streak1;
                    }
                    cout<<endl<<"You have 10 guesses";
                    round = 10;
                    cout<<endl<<"Digit limit: 1 to 10000"<<endl;
                    uniform_int_distribution <> dist(1, 10000);
                    randomNumber = dist(gen);
                    while(round--)
                    {
                    attempt++;
                    cout<<endl<<"My guess: ";
                    cin>>guess;
                    if (guess == "ManamKnowsTheNumber")
                    {
                        cout<<endl<<"The number is: "<<randomNumber;
                        round++;
                        if (attempt != 0)
                        {
                            attempt --;
                        }
                        else
                        {
                            attempt = 0;
                        }
                    continue;
                    }
                    try
                    {
                        x = stoi(guess);
                    }
                    catch(...)
                    {
                        cout << "Invalid number! Try again." << endl;
                        round++;
                        continue;
                    }
                    if (x == randomNumber)
                    {
                        if (randomNumber % 2 == 0)
                        {
                            cout<<endl<<"\033[5;32mFantastic\033[0m"<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\033[5;32mWoooooooW\033[0m"<<endl;
                        }
                        streak = true;
                        streak1++;
                        s.setWinStreak(streak1);
                        break;
                    }
                    else if (x > randomNumber)
                    {
                        cout<<endl<<"Your guess is \033[5;31mhigher\033[0m than the random number"<<endl;
                    }
                    else
                    {
                        cout<<endl<<"Your guess is \033[5;31mlower\033[0m than the random number"<<endl;
                    }
                   cout<<endl<<"Guess remaining: "<<round<<endl;
                    }
                    break;
                }
                case 4:
                {
                    attempt = 0;
                    if (streak1 > 0)
                    {
                        cout<<endl<<"Current streak: "<<streak1;
                    }
                    cout<<endl<<"How many times would you like to guess: ";
                    cin>>round;
                    cout<<endl<<"Upper limit (1 to how much): ";
                    cin>>upperLimit;
                    uniform_int_distribution <> dist(1, upperLimit);
                    randomNumber = dist(gen);
                    while(round--)
                    {
                    attempt++;
                    cout<<endl<<"My guess: ";
                    cin>>guess;
                    if (guess == "ManamKnowsTheNumber")
                    {
                        cout<<endl<<"The number is: "<<randomNumber;
                        round++;
                        if (attempt != 0)
                        {
                            attempt --;
                        }
                        else
                        {
                            attempt = 0;
                        }
                    continue;
                    }
                    try
                    {
                        x = stoi(guess);
                    }
                    catch(...)
                    {
                        cout << "Invalid number! Try again." << endl;
                        round++;
                        continue;
                    }
                    if (x == randomNumber)
                    {
                        if (randomNumber % 2 == 0)
                        {
                            cout<<endl<<"\033[5;32mSpeechless\033[0m"<<endl;
                        }
                        else
                        {
                            cout<<endl<<"\033[5;32mMarvelous\033[0m"<<endl;
                        }
                        streak = true;
                        streak1++;
                        s.setWinStreak(streak1);
                        break;
                    }
                    else if (x > randomNumber)
                    {
                        cout<<endl<<"Your guess is \033[5;31mhigher\033[0m than the random number"<<endl;
                    }
                    else
                    {
                        cout<<endl<<"Your guess is \033[5;31mlower\033[0m than the random number"<<endl;
                    }
                        cout<<endl<<"Guess remaining: "<<round<<endl;
                    }
                    break;
                }
                default:
                {
                    cout<<endl<<"Ha ha... select carefully";
                    goto manam1;
                }
            }
            auto end = high_resolution_clock::now();
            auto duration = duration_cast <seconds> (end - start);
            if (!streak)
            {
                cout<<endl<<"Out of chances! The number was: " << randomNumber << endl;
                streak1 = 0;
                s.setLossStreak(streak1);
            }
            else
            {
                cout<<endl<<"You did it in "<<attempt<<" attempts";
                streak = false;
            }
            cout<<endl<<"Took "<<duration.count()<<" seconds";
            manam2:
            cout<<endl<<endl<<"Want to try again?\n1. Yes\n2. No";
            cout<<endl<<"I choose: ";
            cin>>choice2;
            switch (choice2)
            {
                case 1:
                {
                    goto manam1;
                    break;
                }
                case 2:
                {
                    cout<<endl<<"Okay bye... See you again";
                    break;
                }
                default:
                {
                    cout<<endl<<"Ha ha... select carefully";
                    goto manam2;
                }
            }
            break;
        }
        case 2:
        {
            cout<<endl<<"\033[5;34mBye... See you soon\033[0m";
            break;
        }
        default:
        {
            cout<<endl<<"\033[35mInvalid choice! Don't worry mistakes happen... Choose again\033[0m";
            goto manam;
        }
    }
    return 0;
}