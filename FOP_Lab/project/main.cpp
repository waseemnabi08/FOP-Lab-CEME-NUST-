#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unordered_map>
#include <vector>

using namespace std;
struct accountInfo
{
    string userName;
    string password;
};

struct userIDInfo
{
    string userName;
    int userID;

};

int startPage()
{
    cout << " ===== YOUR PASSWORD MANAGER ===== " << endl;
    cout <
    < R"(
	 ____       _           _
	/ ___|  ___| | ___  ___| |_
	\___ \ / _ \ |/ _ \/ __| __|
     ___) |  __/ |  __/ (__| |_
	|____/ \___|_|\___|\___|\__|



)";

    int userInput = -1;
    do
    {
        cout << "1. Login" << endl;
        cout << "2. Create an account" << endl;
        cout << "0. End program" << endl;

        cout << "Please input your choice: ";

        while (!(cin >> userInput))
        {
            cout << "Error: input was not an integer value" << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }
    }
    while (userInput < 0 || userInput > 2);
    return userInput;
}

unordered_map<string, userIDInfo> getLocalAccounts()
{
    string line;
    string line2;
    int i = 0;
    ifstream inFile;
    unordered_map<string, userIDInfo> accounts;
    userIDInfo userID;

    inFile.open("managerAccounts.txt");
    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            getline(inFile, line2);
            userID.userName = line;
            userID.userID = i;
            accounts[line2] = userID;
            i += 1;
        }
    }
    else
    {
        cout << "No accounts exist please create an account" << endl << endl;
        ;
    }
    inFile.close();
    return accounts;
}

unordered_map<string, string> localUserNameCheck()
{
    string line;
    string line2;
    ifstream inFile;
    unordered_map<string, string> accounts;

    inFile.open("managerAccounts.txt");
    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            getline(inFile, line2);
            accounts[line] = line2;
        }
    }

    inFile.close();
    return accounts;
}

vector<unordered_map<string, vector<string>>> accountsCheck()
{
    string line;
    string line2;
    string line3;
    string line4;
    ifstream inFile;
    vector<string> userPassCombo;
    unordered_map<string, vector<string>> accounts;
    vector<unordered_map<string, vector<string>>> orderedAccounts;

    inFile.open("usersAccounts.txt");
    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            getline(inFile, line2);
            getline(inFile, line3);
            getline(inFile, line4);
            userPassCombo.push_back(line2);
            userPassCombo.push_back(line3);
            accounts[line] = userPassCombo;
            userPassCombo.clear();
            if (line4 == "$")
            {
                orderedAccounts.push_back(accounts);
            }
        }
    }

    inFile.close();
    return orderedAccounts;
}

vector<vector<vector<string>>> containerToDisplay()
{
    string line;
    string line2;
    string line3;
    string line4;
    ifstream inFile;
    vector<string> userPassCombo;
    vector<vector<string>> accounts;
    vector<vector<vector<string>>> orderedAccounts;

    inFile.open("usersAccounts.txt");
    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            getline(inFile, line2);
            getline(inFile, line3);
            getline(inFile, line4);
            userPassCombo.push_back(line2);
            userPassCombo.push_back(line3);
            accounts.push_back(userPassCombo);
            userPassCombo.clear();
            if (line4 == "$")
            {
                orderedAccounts.push_back(accounts);

                accounts.clear();
            }
        }
    }

    inFile.close();
    return orderedAccounts;
}

int logOn()
{
    unordered_map<string, userIDInfo> accounts = getLocalAccounts();
    userIDInfo userInfo;
    string userName;
    string password;

    int accountID;

    if (accounts.empty() == true)
    {
        cout << "No accounts exist please create an account" << endl;
        return -1;
    }

    cout << "Please enter your UserName: ";
    getline(cin >> std::ws, userName);

    cout << "Please Enter your password: ";
    getline(cin >> std::ws, password);

    if (accounts[password].userName != userName)
    {
        cout << "Incorrect password or userName" << endl;
        cout << "Please create an account or try again" << endl;
        accountID = -1;
        return accountID;
    }
    else
    {
        cout << "Login Succesful!" << endl << endl;
        accountID = accounts[password].userID;
        return accountID;
    }
}

void createAccount()
{
    unordered_map<string, string> accounts = localUserNameCheck();
    string userName;
    string passWord;
    bool userExists = false;
    ofstream outFile;
    outFile.open("managerAccounts.txt");
    do
    {
        cout << "Please Create Your userName: ";
        getline(cin >> std::ws, userName);

        if (accounts.count(userName) > 0)
        {
            userExists = true;
            cout << "This userName Already Exists" << endl;
        }
        else
        {
            userExists = false;
        }
    }
    while (userExists == true);
    cout << "Please Create Your Password: ";
    getline(cin >> std::ws, passWord);

  /*  while (true)
    {
        if (passWord.length() < 8)
        {
            cout << "Password must be at least eight characters!" << endl;
            cout << "Password: ";
            getline(cin >> std::ws, passWord);

            if (passWord.length() >= 8)
            {
                break;
            }
        }
    } */

    for (auto i : accounts)
    {
        outFile << i.first << endl;
        outFile << i.second << endl;
    }
    outFile << userName << endl;
    outFile << passWord << endl;
    cout << "Account Created!" << endl << endl << endl;
    outFile.close();
}

int introMenu()
{
    int userChoice;

    do
    {
        cout << " ================================== " << endl;
        cout << "===== YOUR PASSWORD MANAGER ======= " << endl;
        cout << " =================================== " << endl;
        cout << endl;
        cout << R"(
	 ____       _           _
	/ ___|  ___| | ___  ___| |_
	\___ \ / _ \ |/ _ \/ __| __|
     ___) |  __/ |  __/ (__| |_
	|____/ \___|_|\___|\___|\__|



)";
        cout << "Please choose an option" << endl;
        cout << "1. Add a New Password" << endl;
        cout << "2. Generate a New Random Password" << endl;
        cout << "3. Find a Password" << endl;
        cout << "4. View all Passwords" << endl;
        cout << "0. End program" << endl;

        cout << "Please input your choice: ";

        while (!(cin >> userChoice))
        {
            cout << "Error: input was not an integer value" << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }
    }
    while (userChoice != 0 && userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4);
    return userChoice;
}

void addANewPassword(int userID)
{
    vector<unordered_map<string, vector<string>>> orderedAccounts = accountsCheck();
    string application;
    string userName;
    char passWord[200];

    bool accountExists = false;
    ofstream outFile;
    outFile.open("usersAccounts.txt");

    do
    {
        cout << "Please State The Application Name: ";
        getline(cin >> std::ws, application);

        // Convert the entire application string to uppercase
        int i = 0;
        while (application[i] != '\0')
        {
            application[i] = toupper(application[i]);
            i++;
        }

        if (userID < orderedAccounts.size())
        {
            if (orderedAccounts[userID].count(application) > 0)
            {
                accountExists = true;
                cout << "This Account Already Exists" << endl;
            }
            else
            {
                accountExists = false;
            }
        }
    }
    while (accountExists == true);
    cout << "Please Input Your UserName: ";
    getline(cin >> std::ws, userName);

    cout << "Please Input Your Password: ";
    cin >> passWord;

    for (int i = 0; i < orderedAccounts.size(); i++)
    {
        for (auto x : orderedAccounts[i])
        {

            outFile << x.first << endl;
            outFile << x.second[0] << endl;
            outFile << x.second[1] << endl;
            outFile << "*" << endl;
        }
        if (i != userID)
        {
            outFile << "$" << endl;
        }
    }

    outFile << application << endl;
    outFile << userName << endl;
    outFile << passWord << endl;
    outFile << "$" << endl;
    cout << "Account Created!" << endl << endl << endl;
    outFile.close();

    return;
}

void passwordGenerator()
{
    int ranNum;
    int passwordLength;
    vector<char> genPass;
    srand(time(NULL));

    cout << "Please enter the desired password length: ";
    while (!(cin >> passwordLength))
    {
        cout << "Error: input was not an integer value" << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }

    for (int i = 0; i < passwordLength; i++)
    {
        ranNum = rand() % 89 + 33;
        genPass.push_back(static_cast<char>(ranNum));
    }
    cout << "Here is Your New Password Please Copy and Paste it." << endl;
    for (int i = 0; i < genPass.size(); i++)
    {
        cout << genPass[i];
    }
    cout << " " << endl << endl;
}

void findAPassword(int userId)
{
    vector<unordered_map<string, vector<string>>> orderedAccounts = accountsCheck();
    string application;
    string userName;
    char passWord[200];
    bool accountExists = false;

    cout << "Please State The Application Name:";
    getline(cin >> ws, application);

    // Convert the entire application string to uppercase
    int i = 0;
    while (application[i] != '\0')
    {
        application[i] = toupper(application[i]);
        i++;
    }

    if (orderedAccounts[userId].count(application) > 0)
    {
        accountExists = true;
    }
    else
    {
        cout << "This Account Does Exist!" << endl;
    }

    if (accountExists == true)
    {
        cout << "Your UserName: " << orderedAccounts[userId][application][0] << endl;
        cout << "Your Password: " << orderedAccounts[userId][application][1] << endl << endl;
    }

    return;
}

void displayAllPasswords(int userId)
{
    vector<unordered_map<string, vector<string>>> orderedAccounts = accountsCheck();

    if (orderedAccounts[userId].size() == 0)
    {
        cout << "No Accounts Exist Please Add an Account!" << endl << endl;
        return;
    }
    cout << endl;
    int i = 1;
    for (auto x : orderedAccounts[userId])
    {
        cout << "Account #: " << i << endl;
        i++;
        cout << "Account Name: " << x.first << endl;
        cout << "username: " << x.second[0] << endl;
        cout << "Password: " << x.second[1] << endl << endl;
    }

    return;
}

int main()
{

    int userChoice;
    int userID;
    do
    {
        userChoice = startPage();
        if (userChoice == 0)
        {
            cout << R"(

       ____                 _ ____
      / ___| ___   ___   __| | __ ) _   _  ___
     | |  _ / _ \ / _ \ / _` |  _ \| | | |/ _ \
     | |_| | (_) | (_) | (_| | |_) | |_| |  __/
      \____|\___/ \___/ \__,_|____/ \__, |\___|
                                    |___/


            )";
            return 0;
        }
        else if (userChoice == 1)
        {
            userID = logOn();
            if (userID < 0)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if (userChoice == 2)
        {
            createAccount();
        }
    }
    while (userChoice >= 1 && userChoice <= 2);

    do
    {
        userChoice = introMenu();
        if (userChoice == 1)
        {
            addANewPassword(userID);
        }
        else if (userChoice == 2)
        {
            passwordGenerator();
        }
        else if (userChoice == 3)
        {
            findAPassword(userID);
        }
        else if (userChoice == 4)
        {
            displayAllPasswords(userID);
        }
    }
    while (userChoice != 0);

    cout << R"(

       ____                 _ ____
      / ___| ___   ___   __| | __ ) _   _  ___
     | |  _ / _ \ / _ \ / _` |  _ \| | | |/ _ \
     | |_| | (_) | (_) | (_| | |_) | |_| |  __/
      \____|\___/ \___/ \__,_|____/ \__, |\___|
                                    |___/


)";

    return 0;
}