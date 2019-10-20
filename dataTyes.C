#include <iostream>
#include <vector>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

int main()
{

	//INITIALISING TWO DATE OBJECTS, PRINT THE ONE WHICH IS LATER IN TIME.
	
	Date d{}; // Date Object 1
	Date d2{}; // Date Object 2
	
	//First Date
		d.year = 2000;
		d.month = 30;
		d.day = 12;

	//Second Date 
		d2.year = 1992;
		d2.month = 20;
		d2.day = 10;

	if (d.year<d2.year && d.month < d2.month && d.day < d2.day){
		cout << "The First Date is late"<<d.year<<"/"<<d.month<<"/"<<d.day << endl;
	}
	else{
		cout << "The Second Date is current "<<d2.year<<"/"<<d2.month<<"/"<<d2.day <<endl;
	}


	//VECTOR OF THREE DATE OBJECTS, PRINT THE YEAR OF THE SECOND ELEMENT.
	

	Date 	dat1{};
	Date 	dat2{};
	Date	dat3{};
       			dat1.year = 2001;
			dat1.month = 20;
			dat1.day = 3;

			dat2.year = 2002;
			dat2.month = 7;
			dat2.day = 17;

			dat3.year = 2016;
			dat3.month = 10;
			dat3.day = 5;

	vector<Date> vecDate{dat1,dat2,dat3};

	cout <<"The year of the second element is: "<<vecDate[1].year<<endl;	

	//REPLACE THE SECOND ELEMENT WITH
	
	vecDate[1].year = 1984;
	vecDate[1].month = 2;
	vecDate[1].day = 28;

	//INITIALISING DATE POINTER
	
	int *dat3ptr = &dat3.year;

	cout << "The Year: "<< dat3.year << " is in the address "<< *dat3ptr<<endl;



}


