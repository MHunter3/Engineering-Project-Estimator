

/**************Program Details************
This file contains the materials class
to calculate the cost of an engineering project.

*************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


	class Materials {
	private:
		double
			lumber,
			copper,
			metal,
			software,
			salary,
			benefits;
	public:
		void setLumber();
		void setCopper();
		void setMetal();
		void setSoftware();
		void setSalary();
		void setBenefits();
		void displayChart(double, double);
		void getTotal();

	};

#pragma once
