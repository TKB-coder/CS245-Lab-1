// Variables and Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::endl;
int main()
{
	int maxscore = 400;
	cout << "you can earn " << maxscore << "  in this course" << endl;
	const int Passscorep = maxscore * .6;
	int Passscore = Passscorep;
	cout << "you need at least " << Passscore << " to pass this course" << endl;
	int* somescore = &maxscore;
	int Bscore = 356;
	cout << "I believe I will earn " << Bscore << " in this course" << endl;
	bool pass = Bscore >= Passscore;
	if (pass = true) {
		cout << "I will pass the course" << endl;

	}
	else {
		cout << "I will fail the course" << endl;
	}
	int* p1 = &maxscore;
	int* p2 = &Passscore;
	cout << "p1 point to address " << p1 << endl;
	cout << "p1 now points to value " << *p1 << endl;
	cout << "p2 points to address " << p2 << endl;
	cout << "p2 now points to value " << *p2 << endl;
	
	cout << "The size of a signed int is " << sizeof(int) << endl;
	cout << "The size of an unsigned int " << sizeof(unsigned) << endl;
	cout << "The size of a double is " << sizeof(double) << endl;


	



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
