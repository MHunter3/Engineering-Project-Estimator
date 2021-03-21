#include "materials.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

    //this function will set the price of lumber
    void Materials::setLumber()
    {
        double lumber = 31.15;
        cout << "Enter the amount of lumber: ";
        cin >> lumber;

    }

    //this function will set the price of copper
    void Materials::setCopper()
    {
        double copper = 57.66;
        cout << "Enter the amount of copper: ";
        cin >> copper;


    }
    //this function will set the price of sheet metal
    void Materials::setMetal()
    {
        double metal = 10.71;
        cout << "Enter the amount of metal sheets: " ;
        cin >> metal;


    }

    //this function will set the price of auto cad software used on project
    void Materials::setSoftware()
    {
        double software = 105.83;

    }
    //this function will set the monthly salary of engineers
    //to estimate the cost of a project
    //this salary came from the BLS website as an average salary for
    //engineers in the US
    void Materials::setSalary()
    {
        double salary = 7584.16 + benefits;
        cout << "Enter the amount of engineers: ";
        cin >> salary;

    }
    //this function will set the cost of benefits for an employee 
    //working at an engineering firm
    //this cost came from zenefits.com
    void Materials::setBenefits()
    {
        double benefits = 1920;

    }

    //this function will return the total of all materials and salaries
    void Materials::getTotal()
    {
        double total = lumber + copper + metal + software + salary;
        cout << "The total for this project is: " << total << endl;
        cin >> total;
        
    }


    /*
    
    //this function will display totals in a chart
    void Materials::displayChart(double, double)
    {

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        cout << "\n";

        cout << "The following is a report on your monthly expenses\n";

        cout << "\t" << setw(22) << left << "Materials"
            << setw(16) << left << "Estimator"
            << "Actual\n";

        cout << "\t=============== =============== ===============\n";

        cout << "\t" << setw(16) << left << "Lumber"
            << "$" << setw(11) << right << lumber << setw(5) << right
            << "$" << setw(11) << right << lumber << "\n";

        cout << "\t" << setw(16) << left << "Copper"
            << "$" << setw(11) << right << copper << setw(5) << right
            << "$" << setw(11) << right << copper << "\n";

        cout << "\t" << setw(16) << left << "Metal"
            << "$" << setw(11) << right << metal << setw(5) << right
            << "$" << setw(11) << right << metal << "\n";

        cout << "\t" << setw(16) << left << "Software"
            << "$" << setw(11) << right << software << setw(5) << right
            << "$" << setw(11) << right << software << "\n";

        cout << "\t" << setw(16) << left << "Other"
            << "$" << setw(11) << right
            << (metal + software + benefits + salary)
            << setw(5) << right << "$" << setw(11) << right << lumber << "\n";

        cout << "\t=============== =============== ===============\n";

        cout << "\t" << setw(16) << left << "TOTALS"
            << "$" << setw(11) << right << 0.00 << setw(5) << right
            << "$" << setw(11) << right << (salary + benefits + software +
                metal + copper) << "\n";
    }


*/


