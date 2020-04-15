/*
Programmed By: Jalyn Cosby
Class: CS 155-02
Description: Computes How Many Ounces of Water Someone should drink a day
		Depending upon their weight, age and , amount of time spent working out. 
Due Date : 02-05-2018
*/
#include <iostream>
#include <iomanip>
using namespace std;
const double WEIGHT_DIV = 2.2; 
const double OUNCES_OF_WATER = 28.3;
const double LESS_THAN_THIRTY = 40.0;
const double BETWEEN_THIRTY_FIFTYFIVE = 35.0;
const double GREATER_THAN_FIFTYFIFVE = 30.0;

int main (){
	
	
	int weight=0, age=0,  workout_time=0;				//declaring variables
	double total_ounces; 
	
	cout << "Enter your wieght: ";
	cin >> weight;										//reading in weight
	cout << "Enter your age: ";
	cin >> age;											//reading in age
	cout << "Enter your amount of exercise: (in minutes) ";
	cin >> workout_time;								// reading in workout time
	
	

	
	// deciding age mult.
	if (age < 30)
		total_ounces = ((double)weight / WEIGHT_DIV) * LESS_THAN_THIRTY;
	else if (age >= 30 && age <= 55)
		total_ounces =((double)weight / WEIGHT_DIV) * BETWEEN_THIRTY_FIFTYFIVE;
	else
		total_ounces = ((double)weight / WEIGHT_DIV) * GREATER_THAN_FIFTYFIFVE;
		
		
	total_ounces /= OUNCES_OF_WATER;	//dividing by to get ounces a day
	
	// adding ounce per 30 min of workouts
	if (workout_time >= 30 && workout_time <= 59)
		total_ounces += 12.0;
	else if (workout_time > 59 && workout_time <=89)
		total_ounces += 24.0;
	else if (workout_time >= 90 && workout_time <= 119)
		total_ounces += 36.0;
	else if (workout_time >= 120 && workout_time <= 149)
		total_ounces += 48.0;
	else if (workout_time >= 150 && workout_time <= 189)
		total_ounces += 60.0;
	else if (workout_time >= 190 && workout_time <= 219)
		total_ounces += 72.0; 
	else {
		if (workout_time >= 220 && workout_time <= 249)
		total_ounces += 84.0;
	}
	 cout << "You need to drink " << fixed << setprecision(2) << total_ounces << " ounces of water a day!! " << endl; 	// outputting ounces 
	
	
	
	return 0;
}
