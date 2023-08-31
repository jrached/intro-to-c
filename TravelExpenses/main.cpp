/*Name: Reinaldo Figueroa and Juan Rached
  Date: 12/11/19
  Program: Chapter 6, Travel Expenses.
*/

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

//notes: Once you write an employee into the file
//       you should be able to look him up in the
//       file and bring up his information.
//       You have to add a function that does that using strings.

using namespace std;

vector<int> duration(vector<int>);
float transport(vector<int>);
float stay(vector<int>);
float meals(vector<int>);
void searchEmployee(void);

int main()
{
    int loop = 0;
    int days;
    int arrival;
    int departure;
    float transportation;
    float activities;
    float food;
    float totalExpenses;
    vector<int> trip(3, 0);

    do
    {
        ofstream outputFile;
        outputFile.open("EmployeeTravels.txt", std::ios_base::app);

        trip = duration(trip);
        transportation = transport(trip);
        activities = stay(trip);
        food = meals(trip);

        totalExpenses = food + transportation + activities;

        outputFile << totalExpenses << endl << endl;

        outputFile.close();

        cout << "\n\n\tEnter another employee? (1 for yes 0 for no): ";
        cin  >> loop;

    }while(loop != 0);

    searchEmployee();

    return 0;
}

vector<int> duration(vector<int> trip)
{
    int loop;
    int days;
    int arrival;
    int departure;

    //outputfile
        ofstream outputFile;
        outputFile.open("EmployeeTravels.txt", std::ios_base::app);

    do
    {
        loop = 1;

        cout << "\n\t\tTravel Information" << endl;


        //employee general info
        string name;
        string social;
        int size1;

        cout << "\n\tEnter employee name: ";
        cin  >> name;
        cout << "\n\tEnter employee social security number: ";
        cin  >> social;
        size1 = social.size();

        if(size1 != 9)  // must figure out how to make this read the number of digits in the number entered in social. Must be entered as a string.
        {
            cout << "\n\t\t\aERROR: social security number must be exactly 9 digits." << endl;
            loop = 0;
            continue;
        }
        else
        {
            outputFile << name << endl;
            outputFile << social << endl;
        }


        //duration of entire trip

        cout << "\n\tEnter how long the trip lasted (in days): ";
        cin  >> trip[0];
        days = trip[0];

        if(days > 0)
            outputFile << days << endl;
        else
        {
            cout << "\n\t\t\aERROR: duration must be higher than zero." << endl;
            loop = 0;
            continue;
        }

        //time of departure on first day

        cout << "\n\tEnter the time of departure from home (in 24 hour format): ";
        cin  >> trip[1];
        departure = trip[1];

        if(departure >= 0 && departure <= 24)
            outputFile << departure << endl;
        else
        {
            cout << "\n\t\t\aERROR: invalid time." << endl;
            loop = 0;
            continue;
        }

        //time of arrival home on last day.

        cout << "\n\tEnter the time of arrival home (in 24 hour format): ";
        cin  >> trip[2];
        arrival = trip[2];
        if(arrival >= 0 && arrival <= 24)
            outputFile << arrival << endl;
        else
        {
            cout << "\n\t\t\aERROR: Invalid time." << endl;
            loop = 0;
            continue;
        }

    }while(loop != 1);

    outputFile.close();

    return trip;

}

float transport(vector<int> trip)
{
    int loop;
    float total;

    //outputfile
        ofstream outputFile;
        outputFile.open("EmployeeTravels.txt", std::ios_base::app);

    do
    {
        loop = 1;

        cout << "\n\t\tGround and Air travel Expenses" << endl;

        //price of any air fare
        float airfare;

        cout << "\n\tEnter total price of airfare: $";
        cin  >> airfare;
        if(airfare >= 0)
        {
            outputFile << airfare << endl;
        }
        else
        {
            cout << "\n\t\t\aERROR: price cannot be negative." << endl;
            loop = 0;
            continue;
        }

        //price of car rental
        float carRental;

        cout << "\n\tEnter total price of car rental: $";
        cin  >> carRental;
        if(carRental >= 0)
        {
            outputFile << carRental << endl;
        }
        else
        {
            cout << "\n\t\t\aERROR: price cannot be negative." << endl;
            loop = 0;
            continue;
        }

        //miles driven
        float miles;

        cout << "\n\tEnter miles driven on during trip: ";
        cin  >> miles;
        if(miles >= 0)
        {
            outputFile << miles << endl;
        }
        else
        {
            cout << "\n\t\t\aERROR: mileage cannot be negative." << endl;
            loop = 0;
            continue;
        }

        //private vehicle expense ($0.27 per mile)
        float priceMile;
        priceMile = 0.27*miles;
        outputFile << priceMile << endl;

        //parking price. if less than or equal to $6 per day then no charge. else $(price - 6) per day charged to employee
        float parking;
        float parkingTotal;

        cout << "\n\tEnter daily parking price: $";
        cin  >> parking;
        if( parking > 6)
        {
            parkingTotal = (parking - 6)*trip[0];
            outputFile << parkingTotal << endl;
        }
        else
        {
            if( parking >= 0)
            {
                parkingTotal = 0;
                outputFile << parkingTotal << endl;
            }
            else
            {
                cout << "\n\t\t\aERROR: price cannot be negative." << endl;
                loop = 0;
                continue;
            }
        }

        //taxi fares. if less than or equal to $10 per day then no charge. else $(price - 10) per day charged to employee
        float taxi;
        float taxiTotal;

        cout << "\n\tEnter daily taxi fare: $";
        cin  >> taxi;
        if( taxi > 10)
        {
            taxiTotal = (taxi - 10)*trip[0];
            outputFile << taxiTotal << endl;
        }
        else
        {
            if( taxi >= 0)
            {
                taxiTotal = 0;
                outputFile << taxiTotal << endl;
            }
            else
            {
                cout << "\n\t\t\aERROR: price cannot be negative." << endl;
                loop = 0;
                continue;
            }
        }

        //Total transportation expenses
        total = taxiTotal + parkingTotal + airfare + priceMile + carRental;

    }while(loop != 1);

    outputFile.close();

    return total;
}

float stay(vector<int> trip)
{
    //outputfile
    ofstream outputFile;
    outputFile.open("EmployeeTravels.txt", std::ios_base::app);

    float total;
    float lodgingTotal;
    float conference;
    int loop;

    do
    {
        loop = 1;

        cout << "\n\t\tStay and activity expenses" << endl;

        //conference or seminar registration fees

        cout << "\n\tEnter price of conference fees: $";
        cin  >> conference;
        if(conference >= 0)
        {
            outputFile << conference << endl;
        }
        else
        {
            cout << "\n\t\t\aERROR: fees cannot be negative." << endl;
            loop = 0;
            continue;
        }

        //hotel lodging. if less than or equal to $90 per night then no charge. else $(price - 90) per night charged to employee
        float lodging;

        cout << "\n\tEnter price of per night lodging: $";
        cin  >> lodging;
        if( lodging > 90)
        {
            lodgingTotal = (lodging - 90)*trip[0];
            outputFile << lodgingTotal << endl;
        }
        else
        {
            if( lodging >= 0)
            {
                lodgingTotal = 0;
                outputFile << lodgingTotal << endl;
            }
            else
            {
                cout << "\n\t\t\aERROR: lodging fees cannot be negative." << endl;
                loop = 0;
                continue;
            }
        }

    }while( loop != 1);

    total = lodgingTotal + conference;

    outputFile.close();

    return total;
}

float meals(vector<int> trip)
{
    //outputfile
    ofstream outputFile;
    outputFile.open("EmployeeTravels.txt", std::ios_base::app);

    int loop = 1,
        departure;

    departure = trip[1];

    float breakfast,
          lunch,
          dinner,
          tBreakfast,
          tLunch,
          tDinner,
          tMeal;

    cout << "\n\t\tMeal expenses" << endl;

    cout << "\n\tEnter price of daily breakfast: $";
    cin  >> breakfast;
    cout << "\n\tEnter price of daily lunch: $";
    cin  >> lunch;
    cout << "\n\tEnter price of nightly dinner: $";
    cin  >> dinner;

  do
  {
    //daily meal expenditure
    if(breakfast > 9)
    {
        tBreakfast = trip[0]*(breakfast - 9);
    }
    else
    {
        if(breakfast > 0)
        {
            tBreakfast = 0;
        }
        else
        {
            cout << "\n\t\t\aERROR: price cannot be negative.";
            loop = 0;
            continue;
        }
    }

    if(lunch > 12)
    {
        tLunch = trip[0]*(lunch - 12);
    }
    else
    {
        if(lunch > 0)
        {
            tLunch = 0;
        }
        else
        {
            cout << "\n\t\t\aERROR: price cannot be negative.";
            loop = 0;
            continue;
        }
    }

    if(dinner > 16)
    {
        tDinner = trip[0]*(dinner - 16);
    }
    else
    {
        if(dinner > 0)
        {
            tDinner = 0;
        }
        else
        {
            cout << "\n\t\t\aERROR: price cannot be negative.";
            loop = 0;
            continue;

        }
    }

    //additional meals depending on time of departure from home.
    //if time < 7 then breakfast1 is charged. if time < 12 then lunch1 is charged if time < 18 then dinner1 is charged.
    if(departure < 7)
       {
            if(breakfast > 9)
                tBreakfast = tBreakfast + (breakfast - 9);
            else
                tBreakfast = 0;
       }
       else
       {
            if(departure < 12)
            {
                if(lunch > 12)
                    tLunch = tLunch + (lunch - 12);
                else
                    tLunch = 0;
            }
            else
            {
                if( departure > 18)
                {
                    if(dinner > 16)
                        tDinner = tDinner + (dinner - 16);
                    else
                        tDinner = 0;
                }
                else
                {
                }
            }
       }

    //Additional meal depending on time of arrival home.
    //if arrival > 8 then breakfast2 is charged. if time > 13 then lunch2 is charged. if time > 19 then dinner2 is charged
    int arrival;
    arrival = trip[2];

    if( arrival > 8 )
    {
            if(breakfast > 9)
                tBreakfast = tBreakfast + (breakfast - 9);
            else
                tBreakfast = 0;

        if( arrival > 13 )
        {
                if(lunch > 12)
                    tLunch = tLunch + (lunch - 12);
                else
                    tLunch = 0;

            if( arrival > 19 )
            {
                    if(dinner > 16)
                        tDinner = tDinner + (dinner - 16);
                    else
                        tDinner = 0;
            }
        }
    }
    else
    {

    }

  }while( loop != 1);

    //max of 9 dollars for breakfast, 12 for lunch, 16 for dinner

    outputFile << tBreakfast << endl;
    outputFile << tLunch << endl;
    outputFile << tDinner << endl;

    tMeal = tDinner + tBreakfast + tLunch;

    return tMeal;
}

void searchEmployee(void)
{
    ifstream inputFile;
    inputFile.open("EmployeeTravels.txt", std::ios_base::app);

    string myString[17];

    for(int i = 0; i < 17; i++)
    {
        inputFile >> myString[i];
    }

    for(int i; i < 17; i++)
    {
        cout << myString[i] << endl;
    }
}
