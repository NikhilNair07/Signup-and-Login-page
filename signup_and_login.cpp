#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <cstdlib>
#endif

using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    // Assume non-Windows platforms (Linux, macOS)
    system("clear");
#endif
}

int main() {
    string username;
    string password;
    string username1;
    string password1;
    cout << "SIGN UP PAGE" << endl;
    cout << "Enter the new username: ";
    cin >> username;
    cout << "Enter the new password: ";
    cin >> password;

    clearScreen();
    cout<<"LOGIN PAGE"<<endl;
    cout<<"enter the user-name: ";
    cin>>username1;
    cout<<"enter the password: ";
    cin>>password1;
    
    if(username==username1 && password==password1){
        clearScreen();
        cout<<"WELCOME"<<endl;
    }
    else if(username!=username1 && password!=password1){
        cout<<"invalid username and password written"<<endl;
    }
    else if(username!=username1){
        cout<<"invalid username written"<<endl;
    }
    else if(password!=password1){
        cout<<"ivalid password written"<<endl;
    }
    
}