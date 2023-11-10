#include <bits/stdc++.h>
using namespace std;

// What is a map in C++?
// A C++ map is a way to store a key-value pair. A map can be declared:
map<string, string> credentials;

/*
C++ Variables
Variables are containers for storing data values.
In C++, there are different types of variables (defined with different keywords), for example:
*/
// int - stores integers (whole numbers), without decimals, such as 123 or -123.
// double - stores floating point numbers, with decimals, such as 19.99 or -19.99.
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes.
// string - stores text, such as "Hello World". String values are surrounded by double quotes.
// bool - stores values with two states: true or false.

// void means that the function does not have a return value. You will learn more about return values later in the next chapter
void createUser()
{

    // Create your username and password.
    cout<<"\n\t\t\t\t\t\t\tYou choose Register User. \n\n";
    cout << "\t\t\t\t\t\t\t=====================================================================================================\n";

    cout << "\n\t\t\t\t\t\t\tCreate Your Account To Log-In. \n";
    string username, password;
    cout << "\n\t\t\t\t\t\t\tEnter username: ";
    cin >> username;
    cout << "\t\t\t\t\t\t\tEnter password: ";
    cin >> password;

    // This is the map that have two value pair
    credentials[username] = password;
    cout << "\n\t\t\t\t\t\t\tUser created successfully!\n\n";
    cout << "\t\t\t\t\t\t\t=====================================================================================================\n";
}

// bool = A variable of this type can have values true and false . Conditional expressions have the type bool and so have values of type bool . For example, i != 0 now has true or false depending on the value of i .

bool login()
{

    // Log-In your username and password that you make.
    cout<<"\n\t\t\t\t\t\t\tYou choose Log-in. \n";
    string username, password;
    cout << "\n\t\t\t\t\t\t\t=====================================================================================================";
    cout << "\n\n\t\t\t\t\t\t\tLog-In Your Created Account. \n";
    cout << "\n\t\t\t\t\t\t\tEnter username: ";
    cin >> username;
    cout << "\t\t\t\t\t\t\tEnter password: ";
    cin >> password;
    cout << "\n\n\t\t\t\t\t\t\t=====================================================================================================\n";

    // (If) your the username and password is true then run this program if (else) then return 0 mean stop the program.
    if (credentials[username] == password)
    {
        cout << "\n\t\t\t\t\t\t\t Welcome User-nim. \n";
        cout << "\n\t\t\t\t\t\t\tLogin successful! \n";
        cout << "\t\t\t\t\t\t\t=====================================================================================================\n";

    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t\tInvalid username or password. Please Create Account First.\n\n";
       createUser() ;
    }

    return 1;
};

void payElectricBill()
{
    // Progress for paying electric bills.

    int previous, present, resultBill, resultElectricBill;
    cout << "\t\t\t\t\t\t\t=====================================================================================================";
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter Your PreviousBill and PresentBill. \n";

    cout << "\n\t\t\t\t\t\t\tElectric bill payment processed.\n\n";
    cout << "\t\t\t\t\t\t\tRate: 1.50 \n";
    cout << "\n\t\t\t\t\t\t\tEnter Your Previous Bill: ";
    cin >> previous;

    cout << "\n\t\t\t\t\t\t\tEnter Your Present Bill: ";
    cin >> present;


    resultBill = previous - present;

    resultElectricBill = resultBill * 1.50;

    cout << "\n\t\t\t\t\t\t\tThis is result: " << resultElectricBill;
    cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n\n";
}

void payWaterBill()
{

    // Logic for paying water bills.
    int previous, present, resultBill, resultWaterBill;
    cout << "\n\t\t\t\t\t\t\t=====================================================================================================";
    cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter Your PreviousBill and PresentBill. \n";

    cout << "\n\t\t\t\t\t\t\tWater bill payment processed. ";
    cout << "\t\t\t\t\t\t\tRate: 1.50 \n";
    cout << "\n\t\t\t\t\t\t\tEnter Your Previous Bill: ";
    cin >> previous;

    cout << "\n\t\t\t\t\t\t\tEnter Your Present Bill: ";
    cin >> present;



    resultBill = previous - present;
    resultWaterBill = resultBill * 1.50;

    cout << "\n\t\t\t\t\t\t\tThis is result: " << resultWaterBill;
    cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n\n";



}

void calculator()
{
    // Calculator Logic Process.
    int choiceOperator;
    cout << "\n\t\t\t\t\t\t\t\t\tChoose A Operator To Calculate. \n";

    // Choose a operator.
    cout << "\n\n\t\t\t\t\t\t\tWhat Operator? (+, -, /, *) \n";

    // Addition.
    cout << "\n\t\t\t\t\t\t\t 1. Addition: + \n";

    // Subtraction.
    cout << "\n\t\t\t\t\t\t\t 2. Subtraction: - \n";

    // Division.
    cout << "\n\t\t\t\t\t\t\t 3. Division: / \n";

    // Multiplication.
    cout << "\n\t\t\t\t\t\t\t 4. Multiplication: * \n";

    cout << "\n\t\t\t\t\t\t\t 5. Exit* \n";

    cout << "\n\n\t\t\t\t\t\t\t\t\t Enter The Choice: ";
    // cin = calling the variable.
    cin >> choiceOperator;
    cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n";

    // switch = Use the switch statement to select one of many code blocks to be executed.
    //  The switch expression is evaluated once.
    switch (choiceOperator)
    {
    // The value of the expression is compared with the values of each case.
    // If there is a match, the associated block of code is executed.
    case 1:
        int add, adding, addition;
        cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n";
        cout << "\n\t\t\t\t\t\t\tYou Choose Addition Operator. \n";

        cout << "\n\t\t\t\t\t\t\tEnter FirstNumber: ";
        cin >> add;
        cout << "\n\t\t\t\t\t\t\tEnter SecondNumber: ";
        cin >> adding;

        addition = add + adding;

        cout << "\n\t\t\t\t\t\t\tResult: " << addition;
        break;
    case 2:
        int subtract, subtracting, subtraction;
        cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n";
        cout << "\n\t\t\t\t\t\t\tYou Choose Subtraction Operator. ";
        cout << "\n\t\t\t\t\t\t\tEnter FirstNumber: ";
        cin >> subtract;
        cout << "\n\t\t\t\t\t\t\tEnter SecondNumber: ";
        cin >> subtracting;

        subtraction = subtract - subtracting;

        cout << "\n\t\t\t\t\t\t\tResult: " << subtraction;
        break;
    case 3:
        int divide, dividing, division;
        cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n";
        cout << "\n\t\t\t\t\t\t\tYou Choose Division Operator. \n";
        cout << "\n\t\t\t\t\t\t\tEnter FirstNumber: ";
        cin >> divide;
        cout << "\n\t\t\t\t\t\t\tEnter SecondNumber: ";
        cin >> dividing;

        division = divide / dividing;

        cout << "\n\t\t\t\t\t\t\tResult: " << division;
        break;
    case 4:
        int multiply, multiplying, multiplication;
        cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n";
        cout << "\n\t\t\t\t\t\t\tYou Choose  Multiplication Operator. \n";
        cout << "\n\t\t\t\t\t\t\tEnter FirstNumber: ";
        cin >> multiply;
        cout << "\n\t\t\t\t\t\t\tEnter SecondNumber: ";
        cin >> multiplying;

        multiplication = multiply * multiplying;

        cout << "\n\t\t\t\t\t\t\tResult: " << multiplication;
        break;
    case 5:
        int main();
        break;
    // The (break) and (default) keywords are optional, and will be described later in this chapter.
    default:
        cout << "\n\n\t\t\t\t\t\t\tInvalid choiceOperator. Please try again.\n";
        cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n";
        calculator();
        break;
    }

}

int main()
{
    //  The Main Logic Of The Program.
    int choice;

    while (true)
    {
        cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tWelcome User Pick One In The Choices. ";
        cout << "\n\t\t\t\t\t\t\t\t\t==================================================================";
        cout << "\n\t\t\t\t\t\t\t\t\t= 1. Register Account.                         ";
        cout << "\n\t\t\t\t\t\t\t\t\t= 2. Log-In.                                 ";
        cout << "\n\t\t\t\t\t\t\t\t\t= 3. Exit.                                   ";
        cout << "\n\t\t\t\t\t\t\t\t\t==================================================================";

        cout << "\n\n\t\t\t\t\t\t\t\t\tEnter The Choice: ";
        cin >> choice;

        // switch = Use the switch statement to select one of many code blocks to be executed.
        //  The switch expression is evaluated once.
        switch (choice)
        {
        // The value of the expression is compared with the values of each case.
        // If there is a match, the associated block of code is executed.
        case 1:
            createUser();
            break;
        case 2:
            if (login())
            {
                int number;
                while (true)
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPick-One To Processed. \n";


                    cout<< "\n\n\t\t\t\t\t\t\t Welcome To Our System User-nim. \n\n";

                    cout << "\n\t\t\t\t\t\t\t  1. PayElectricBill. ";
                    cout << "\n\t\t\t\t\t\t\t  2. PayWaterBill.";
                    cout << "\n\t\t\t\t\t\t\t  3. Calculator. ";
                    cout << "\n\t\t\t\t\t\t\t  4. Logout. ";
                    cout << "\n";

                    cout << "\n\t\t\t\t\t\t\tPick-One To Processed: ";
                    cin >> number;
                    cout << "\n\n";

                    // switch = Use the switch statement to select one of many code blocks to be executed.
                    //  The switch expression is evaluated once.
                    switch (number)
                    {
                    case 1:
                        payElectricBill();
                        break;
                    case 2:
                        payWaterBill();
                        break;
                    case 3:
                        calculator();
                        break;
                    case 4:
                        cout << "\n\n\t\t\t\t\t\t\tYou choose Logout. Thank You For Using Our System. :D ";
                        return 0;
                        break;
                    default:
                        cout << "\n\n\t\t\t\t\t\t\tInvalid choice. Please try again.\n";
                        return 0;
                        break;
                    }
                    if (choice == 3)
                    {
                        break;
                    }
                }
            }
            break;
        // The (break) and (default) keywords are optional, and will be described later in this chapter.
        default:
            cout << "\n\n\t\t\t\t\t\t\tYou choose Exit. Thank You For Using Our System User-nim.";
            cout << "\n\n\t\t\t\t\t\t\t\t\t==================================================================\n";
            return 0;
        }
    }
    return 0;
}
