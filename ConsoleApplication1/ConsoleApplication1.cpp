// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
//#include "stdlib.h"



using namespace std;

int main(){
	cout << "Hello FizzBuzz!\n";
		
	for (int i = 1; i < 101; i++) {
		if (i % 3 == 0 && i % 5 == 0 )
			cout << "FizzBuzz" << endl;
		else if (i % 3 == 0)
			cout << "Fizz" << endl;
		else if (i % 5 == 0)
			cout << "Buzz" << endl;
			cout << i << endl;
	}; 

	system("pause");
    return 0;
}