 #include <iostream>
using namespace std;

const int GUM = 45; 
const int PEANUTS = 50; 
const int CHIPS = 75; 
const int SODA = 100; 
int main(){
	int myAmnt = 0; 
	int change = 0;
	int quarter=0;
	int dime=0;
	int nickle=0;
	int penny=0;
	int choice=0;

	
	do{						//loops until user enters 1
	
	cout << "Enter money:  [45-100] ";
	cin >> myAmnt;
	cout << endl; 

	
	if ( myAmnt >= 45 && myAmnt <= 100){			//if value in range is entered then display options 
		cout << "Your options are: " << endl;
		cout << "1. Gum - $0.45 cents: " << endl;
		cout << "2. Peanuts - $0.50 cents:" << endl;
		cout << "3. Potato Chips - $0.75 cents:" << endl;
		cout << "4. Soda - $1.00 cents:" << endl;
		cout << endl; 
		cout << "Enter number of Desired confection: ";
		cin >> choice;
	}
	
	else {
		if (myAmnt ==1)
			return 0;
		else{
			cout << "invalid entry" << endl; 
			return 0;
		}
	}
	cout << endl; 
	
	
	
	switch (choice){		//selects the correct choice*
		case 1:
			if (myAmnt >= GUM){
				cout << "Your Gum has been sent!" << endl;
				change = myAmnt-GUM; 								//calculates change
				cout << "your change is $0." << change << " ."<< endl;
			}
			else 
				cout << "you dont have enough money" << endl;
		break;
		case 2:
			if (myAmnt >= PEANUTS){
				cout << "Your Peanuts have been sent!" << endl;
				change = myAmnt-PEANUTS; 							//calculates change
				cout << "your change is $0." << change << " ."<< endl;
			}
			else 
				cout << "you dont have enough money" << endl;
			break;
		
		case 3: 
			if (myAmnt >= CHIPS){
				cout << "Your Potato Chips have been sent!" << endl;
				change = myAmnt-CHIPS; 								//calculates changes
				cout << "your change is $0." << change << "."<< endl;
			}
			else  
				cout << "you dont have enough money" << endl;
			break;
		case 4:
			if (myAmnt >= SODA){
				cout << "Your soda has been sent!" << endl;
				change = myAmnt-SODA; 								//calculates change 
				cout << "your change is $0." << change << "."<< endl;
			}
			else  
				cout << "you dont have enough money" << endl;
				break; 
		default:
			cout << "invalid entry " << endl;

}

	
//	while (myAmnt >= choice){
//		myAmnt-=choice;		
//			cout << "Your change is " << myAmnt << " cents " << endl;
			

	
		//	cout << "Quarters: " << change%25 << endl;
		//	cout << "Dimes: " << change%10 << endl;
		//	cout << "Nickle: " << change%5 << endl;
		
//	}


		while (change > 0){
			if (change >= 25){
				change = change - 25;
				quarter++;
			}else if(change < 25 && change >= 10){
				change = change - 10; 
				dime++;
			}else if (change <10 && change >=5){
				change = change-5;
				nickle++;
			}else{
				change = change -1;
				penny++;
			}
			
			
	}
	cout << endl;
	if (quarter>0 || dime>0 || nickle>0 || penny>0){				//only displays change breakdown if there is change
	
		cout << "Your change breakdown is: " << endl;
		cout << "-----------------------------" << endl;
		if (quarter>0)
			cout << quarter << " quarter(s)" << endl;
		if (dime>0)
			cout << dime << " dime(s)" << endl;
		if (nickle>0)
			cout << nickle << " nickle(s)" << endl;
		if (penny>0)
			cout << penny << " pennies" << endl;
		cout << "-----------------------------" << endl;
}

	//resets the change values
	quarter=0;
	dime=0;
	nickle=0;
	penny=0;
	
	cout << endl;
	cout << "Enter 1 to quit " << endl;
}while (myAmnt!=1);

	
	return 0;
}

