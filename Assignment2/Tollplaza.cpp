#include <iostream>
using namespace std;

class Tollplaza
{
    int totalVechicles;
    double totalRevenue;

public:
    void vechiclepay(int vehctype, double amount)
    {
        if (vehctype == 1)
        {
            totalVechicles++;
            totalRevenue = totalRevenue + amount;
            cout << "Total vechiles = " << totalVechicles << " "
                 << "Total Revenue =" << totalRevenue << endl;
        }
        else if (vehctype == 2)
        {
            totalVechicles++;
            totalRevenue = totalRevenue + amount;
            cout << "Total vechiles = " << totalVechicles << " "
                 << "Total Revenue =" << totalRevenue << endl;
        }
        else if (vehctype == 3)
        {
            totalVechicles++;
            totalRevenue = totalRevenue + amount;
            cout << "Total vechiles = " << totalVechicles << " " << "Total Revenue =" << totalRevenue << endl;
        } 
    }

    int getTotalVehicles() const
    {
        return totalVechicles;
    }

    double getTotalRevenue() const
    {
        return totalRevenue;
    }

    void setreset(int tv, double tr)
    {
        totalVechicles = tv;
        totalRevenue = tr;
    }

    // void displaydetails()
    // {
    //     cout << "Total vechiles = " << totalVechicles << " "
    //          << "Total Revenue =" << totalRevenue << endl;
    // }
};

int main()
{
    int num;
    int amtcar = 180;
    int amttruck = 300;
    int amtbus = 350;

    Tollplaza t1;
    do
    {

        cout << "Kindly Choose your option" << endl;
        cout << "1.  Add a standard car and Collect toll " << endl;
        cout << "2.  Add a truck and collect " << endl;
        cout << "3.  Add a bus and collect toll " << endl;
        cout << "4.  Display Total Cars Passed " << endl;
        cout << "5.  Display Total Revenue Collected " << endl;
        cout << "6.  Reset booth Statistics " << endl;
        cout << "7.  Exit the Program " << endl;
        cin >> num;

        switch (num)
        {

        case 1: 
            t1.vechiclepay(1, amtcar);
            break;

        case 2:
            t1.vechiclepay(2, amttruck);
            break;

        case 3:
            t1.vechiclepay(3, amtbus);
            break;

        case 4:
            cout << "Total vechicles passed = " << t1.getTotalVehicles() << endl;
            break;

        case 5:
            cout << "Total Revenue Collected = " << t1.getTotalRevenue() << endl;
            break;

        case 6:
            t1.setreset(0, 0);
            break;

        case 7:
            cout << " Program Ends " << endl;
            cout << " THANK YOU " << endl;
            break;

        default:
            cerr << "Invalid Choice Option " << endl;
            break;
        }

    } while (num != 0);
}