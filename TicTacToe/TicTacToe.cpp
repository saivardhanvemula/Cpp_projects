#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

string GetCom() {
    int n = rand() % 3 + 1; 
    switch (n) {
        case 1:
            return "s"; 
        case 2:
            return "p";
        case 3:
            return "r"; 
        default:
            return "";
    }
}

bool GetResults(string s, string c) {
    if ((s == "s" && c == "p") || 
        (s == "r" && c == "s") || 
        (s == "p" && c == "r")) {
        return true;
    } else {
        return false;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    cout << "Rock-Paper-Scissors Game" << endl;
    int playerWins = 0, computerWins = 0;
    cout << "Enter (Q/q) to exit the game" << endl;
    string s = "", c = "";

    while (true) {
        cout << "Select your option (R/P/S): ";
        cin >> s;

        char choice = tolower(s[0]);
        s = string(1, choice);

        if (s == "q") {
            break;
        }

        if (s != "r" && s != "p" && s != "s") {
            cout << "Select a valid option!" << endl;
            continue;
        }

        c = GetCom();
        cout << "You Selected: " << s << "\tComputer Selected: " << c << endl;

        if (GetResults(s, c)) {
            cout << "You Won!" << endl;
            playerWins++;
        } else if (s == c) {
            cout << "It's a tie!" << endl;
        } else {
            cout << "Computer Wins :(" << endl;
            computerWins++;
        }
    }

    cout << "Game Completed" << endl;
    cout << "Final Score: You - " << playerWins << " | Computer - " << computerWins << endl;

    return 0;
}
