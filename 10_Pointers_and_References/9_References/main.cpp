/*  
 * int num {100};     // variable 
 * int &ref {num};    // reference of num 
 * 
 * references alwayes initialize by variable
 * it can not null you must initialize them with variable 
 * 
 * L values and R values 
 * int number {100}     //  x L value and 100 is R value
 * 
 * 
 * 
 * 
 */ 




// References
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int num {100};
    int &ref {num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num  = 200;
    cout << "\n---------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    ref = 300;
    cout << "\n---------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n---------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto str: stooges)     
        str = "Funny";              // str is a COPY of the each vector element
      
    for (auto str:stooges)        // No change
        cout << str << endl;
 
    cout << "\n---------------------------------" << endl;
    for (auto &str: stooges)  // str is a reference to each vector element
        str = "Funny";
     
    for (auto const &str:stooges)   // notice we are using const
        cout << str << endl;            // now the vector elements have changed
    
    cout << endl;
    return 0;
}

