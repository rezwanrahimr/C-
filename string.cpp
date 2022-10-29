#include <iostream>
#include <string>
using namespace std;
int main(){
    string FirstName = "rezwan ";
    string SecondName = "rahim";
    // string FullName = FirstName + ' ' + SecondName;
    string FullName = FirstName.append(SecondName);
    cout << FullName;
}