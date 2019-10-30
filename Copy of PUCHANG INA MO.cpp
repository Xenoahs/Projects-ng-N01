#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
	static HANDLE h = NULL;
	if (!h)
	h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = {x,y};
	SetConsoleCursorPosition(h,c);

}
void tablecontents()
{
	cout << "***    ***"  cout << "**********"  cout << "**********"  cout << "**********"  cout << "**********"  cout << "***********"  cout << "****   ****"    cout << "**********"
	cout << "****  ****"  cout << "**********"  cout << "**********"  cout << "**********"  cout << "**********"  cout << "****   ****"  cout << "****   ****"    cout << "***   ****"
	cout << "**********"  cout << "****  ****"  cout << "*****     "  cout << "    **    "  cout << "**        "  cout << "****   *** "  cout << "***** *****"    cout << "   *******"
	cout << "*** ** ***"  cout << "**********"  cout << "**********"  cout << "    **    "  cout << "******    "  cout << "****  ***  "  cout << " **** **** "    cout << "   *****  "
	cout << "*** ** ***"  cout << "**********"  cout << "**********"  cout << "    **    "  cout << "**        "  cout << "**** **    "  cout << "   ** **   "    cout << "      ****"
	cout << "*** ** ***"  cout << "****  ****"  cout << "     *****"  cout << "    **	 "  cout << "**********"  cout << "**** ****  "  cout << "    ***    "    cout << "***   ****"
	cout << "*** ** ***"  cout << "****  ****"  cout << "**********"  cout << "    **    "  cout << "**********"  cout << "**** ******"  cout << "    ***    "    cout << "**********"
	gotoxy(39,30);cout<<"  ____________________________________________________________";
	gotoxy(40,31);cout<<"| Chapter 1 - Introduction to Programming                     |";
	gotoxy(40,32);cout<<"|                                                             |";
	gotoxy(40,33);cout<<"| Chapter 2 - Program Logic Design and Formulation            |";
	gotoxy(40,34);cout<<"|                                                             |";
	gotoxy(40,35);cout<<"| Chapter 3 - Introduction to C++ Programming                 |";
	gotoxy(40,36);cout<<"|                                                             |";
	gotoxy(40,37);cout<<"| Chapter 4 - Basic Input/Output System                       |";
	gotoxy(40,38);cout<<"|                                                             |";
	gotoxy(40,39);cout<<"| Chapter 5 - Program Control: Conditional Control Structures |";
	gotoxy(40,40);cout<<"|                                                             |";
	gotoxy(40,41);cout<<"| Chapter 6 - Program Control: Repetition Control Structures  |";
	gotoxy(40,42);cout<<"|_____________________________________________________________|";
}
int main()
{
	tablecontents();


}
