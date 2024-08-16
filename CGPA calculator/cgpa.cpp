#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cout << "Cgpa Calculator" << endl;
    int numSubjects;

    string name;
    cout << "Enter the name :" << endl;
    getline(cin, name);
    // cin>>name;

    cout << "Enter the number of subjects : " << endl;
    cin >> numSubjects;
    vector<int> credits(numSubjects);
    vector<float> grades(numSubjects);
    for (int i = 0; i < numSubjects; i++)
    {
        cout << "Subject " << i + 1 << ":\n";
        cout << "Credits: ";
        cin >> credits[i];
        cout << "Grade (out of 10): ";
        cin >> grades[i];
    }
    float totalGrades = 0;
    int totalCredits = 0;
    for (int i = 0; i < numSubjects; ++i)
    {
        totalGrades += grades[i] * credits[i];
        totalCredits += credits[i];
    }
    float cgpa = totalGrades / totalCredits;
    cout << "Your CGPA is: " << cgpa << endl;
    return 0;
}