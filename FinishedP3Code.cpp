#include <iostream>
using namespace std; 

int main(){
	int type,memchoice, upgrade,printer;
	char model,soup;
	double total;
	
	cout << "H. Home Model $399.00 " << endl;
	cout << "W. Work Model $599.00 " << endl;
	cout << "G. Gaming Model $749.00 " << endl;
	cout << "Select (H, W, G)? " << endl; 
	cin >> model;
	(toupper(model));
	
	
	switch (model){

		case 'H':
		
			case 'h':
			type = 399.00;
			break;
		case 'W':
			
			case 'w':
			type = 599.00;
			break;
		case 'G':
			
			case 'g':
			type = 749.00;
			break;
			
		default: 
			cout << "Invalid Entry (must be H, W, G)" << endl;
	}
	
	cout << endl;
	cout<< "************************************************************************" << endl;
	cout << "Your computer comes with 8 GB of memory. You may upgrade if you wish." << endl;
	cout << "A 16 GB upgrade costs $50.00" << endl;
	cout << "A 32 GB upgrade costs $100.00" << endl;
	cout<< "************************************************************************" << endl;
	
	cout << "Enter 0 to stay with 8 GB, 1 for 16GB, or 2 for 32 GB.";
	cin >> memchoice;
	
	switch (memchoice ){
		case 0:
			cout << "8 GB Memory" << endl;
			upgrade = 0.00;
			break;
		case 1: 
			cout << "16 GB Memory" << endl;
			upgrade = 50.00;
			break;
		case 2:
			cout << "32 GB Memory" << endl;
			upgrade = 100.00;
			break;
		default: 
		cout << "Invalid Entry" << endl;
	}
	
	cout << "A printer is $150.00. Would you like a printer (Y/N)?" << endl;
	cin >> soup;
	(toupper(soup));
	
	switch (soup){
		
		case 'Y':
			case 'y':
			cout << "Printer " << endl;
			printer = 150.00;
			break;
		case 'N':
			case 'n':
			printer = 0.00;
			break;
		default: 
		cout << "Invalid Entry. Printer not selected." << endl;
			break;
}
	cout << endl;
	cout << endl;
	
	total = (type + upgrade) + printer;
	cout << "------------Invoice------------"<< endl;
	cout <<"Computer	: $" << type << endl;
	cout << "Memory Choice	: $" << upgrade << endl;
	cout << "Printer		: $" << printer << endl;
	cout << "Total Due	: $" << total << endl;
	return 0;
}

