#include <iostream>

using namespace std;

int main(){
    /*
    EXP 1 VARIABLEs 
  string expName = "John Smith"; //variable for preselcted name
  double hrRate = 18.00; //variable for preselected rate
  double weekHrs = 33.00; //variable for preselected Hr
    */
    string userName;
    double userWeekHr;
    double userPayRate;
    double otRate;
    double otHrs;
    double totalPay = 0;  //variable for total pay after calculation
    char choice;
/*
    EXP 1 OUTPUTS
    cout << "Employee Name: " << expName << endl;
    cout << "Employee Pay Rate: $" << hrRate << endl;
    cout << "Employee Hours this Week: " << weekHrs << endl;

     totalPay = weekHrs * hrRate; //totalPay Calculation

    cout << "Employee Total Pay this Week is: $" << totalPay << endl; //outputs Weekly total pay
    return 0;
*/
    cout << "Enter Employee's Name Here: ";
    getline (cin, userName);
    cout << userName << endl;
    cout << "Enter Employee's Pay Rate Here: $";
    cin >> userPayRate;
    cout << "$" << userPayRate << endl;
    cout << "Enter Employee's Total Hours for This Week: ";
    cin >> userWeekHr;
    cout << userWeekHr << endl;
        if(userWeekHr > 40)
        {
            cout << "WARNING THE HOURS YOU ENTERED ARE OVER 40, THIS WILL RESULT IN OVERTIME PAY." << endl;
            cout << "Do you want to continue? (type either 'y' or 'n') ";
            cin >> choice;
                if(choice == 'y'){

                
            otRate = (userPayRate / 2) + userPayRate;
            cout << "Overtime Rate is $" << otRate << endl;
            otHrs = userWeekHr - 40.00;
            cout << "Overtime Hours are: " << otHrs << endl;

            totalPay = ((userWeekHr - otHrs) * userPayRate) + (otHrs * otRate);
        cout << "Employee Total Pay this Week is: $" << totalPay << endl;
        return 0;
                }
                else {
                return 0;
                }
        }
        else {

        totalPay = userWeekHr * userPayRate;
        cout << "Employee Total Pay this Week is: $" << totalPay << endl;
        return 0;
        }
    
}