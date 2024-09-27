#include <iostream>
#include <random>
#include <ctime>

using namespace std;

struct Greet{
    string hi;
    string question;
    string choice[5];
};

int main() {
    srand((unsigned) time(0));
    int count = 0;
    Greet welcome = {"Hello!", "Would you like tea?", {"Yes", "No", "Maybe", "I don't know", "Perhaps"} };
    int pick = 0;
    for (int i = 0; i < 3; i++){
        pick = rand()%5;
        cout << welcome.hi << " " << welcome.question << endl;
        cout << welcome.choice[pick] << endl;
        if (pick == 0) {
            count++;
        }
    }

    if (count == 1) {
        cout << count << " person said yes to tea!" << endl;
    }
    else {
        cout << count << " people said yes to tea!" << endl;
    }

    return 0;
}