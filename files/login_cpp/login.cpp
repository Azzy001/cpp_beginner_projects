# include <iostream>
# include <unistd.h>
using namespace std;

int main(){
    cout << endl << "------ PasswordLogin System ------------------------------\n" << endl;
    string username;
    string password;
    cout << "Welcome to system, please login" << endl;
    
    int tries = 3;
    while (tries > 0){

        cout << "Enter username: ";
        // user input username
        cin >> username;
        cout << "Enter password: ";
        // user input password
        cin >> password;

        if (username == "Admin" && password == "Admin"){
            // if username and password equals Admin
            cout << "Login Successful\n" << endl;
            cout << "----------------------------------------------------------\n" << endl << endl;
            // breaks while loop
            break;
        }
        else if (username != "Admin" || password != "Admin"){
            // if username or passord doesn't equal to Admin
            cout << "Login Failed\n" << endl;
            tries = tries -1;
            
            if (tries == 0){
                // nested if statement, if tries equals to 0
                cout << "System locked" << endl;
                cout << "System restarting, please wait!" << endl;
                // pauses program for 4 seconds
                sleep(4);
                // command clears console
                system("cls");
                // runs main function
                main();
            }
        }
    }
    return 0;
}
