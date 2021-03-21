/*
Author: Morgan Hunter
Project Name: Project Estimator
Date: 3/21/2021
*/

/*************Program Details*****************
This program will estimate the cost of
an engineering project using various material
cost including lumber, copper, metal, software,
salary and benefits package.

*************************************************/

#include <iostream>
#include <iomanip>
#include "materials.h"



using namespace std;


int main() {

	cout << "Welcome to the Poject Estimator" << endl;
	cout << "To begin, please enter your material estimations" << endl;

    Materials woodSlabs;
    woodSlabs.setLumber();
    
    Materials wiring;
    wiring.setCopper();


    Materials metalStructure;
    metalStructure.setMetal();

    Materials programmingDashboards;
    programmingDashboards.setSoftware();

    Materials empSalary;
    empSalary.setSalary();

    Materials benPackage;
    benPackage.setBenefits();

    Materials totalOfProject;
    totalOfProject.getTotal();

    //Materials chart;
    //chart.displayChart();





	


}