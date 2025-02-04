// Challenge 

/*
	For this program I will be using india rupe  and pese.
     * 1 rupes to 100 pese
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the india:
		1 rupe is 100 pese
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
    
    // define conversion values in cents
    const int rupe_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change_amount {};
        
    // Solution 1 - not using the modulo operator
    
    cout << "Enter an amount in rupe : ";
    cin >> change_amount;
    
    int balance{}, rupe{}, quarters {}, dimes{}, nickels{}, pennies{};
      
    rupe = change_amount / rupe_value;    
    balance = change_amount - (rupe * rupe_value);     
    
    quarters =  balance / quarter_value;
    balance -= quarters * quarter_value;

    dimes = balance / dime_value;
    balance -= dimes * dime_value;

    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;

    pennies = balance;
    
    cout << "\nYou can provide this change as follows : " << endl;
    cout << "rupe  : " << rupe << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;

//  End of Solution 1

// Solution 2 - using the modulo operator

    cout << "----------------------------" << endl;
    cout << "Solution using the modulo operator" << endl;
    cout << "----------------------------" << endl;

    balance = rupe = quarters = dimes = nickels = pennies = 0;  // reset everthing to zero

    rupe = change_amount / rupe_value;   
    balance = change_amount % rupe_value;
    
    quarters = balance / quarter_value;
    balance %= quarter_value;
    
    dimes = balance / dime_value;
    balance %= dime_value;
    
    nickels = balance / nickel_value;
    balance %= nickel_value;
    
    pennies = balance;

    cout << "\nYou can provide this change as follows : " << endl;
    cout << "rupe  : " << rupe << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;

    cout << endl;
    return 0;
}

