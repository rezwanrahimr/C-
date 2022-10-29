#include <iostream>
#include <string>
using namespace std;
int main(){
    string FirstName = "rezwan ";
    string SecondName = "rahim";
    // string FullName = FirstName + ' ' + SecondName;
    string FullName = FirstName.append(SecondName);
 /*    cout << FirstName.length();
    cout << SecondName.size();
    cout << FullName; */


    // Access String
 /*    string name = "toma";
    name[0] = 'R';
    cout << name; */

    // user input string.
    string fullName;
    cout << "enter your name: ";
    getline(cin,fullName);
    cout << "Your name is : " << fullName;
}