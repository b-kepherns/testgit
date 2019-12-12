#include<iostream>
#include<fstream>
#include<string>//helps you use string
#include<time.h>
#include<cstdlib>
#include "student_portal.h"
#include "kuportal.h"
#include "administrator.h"
#include "utilities.h"//contains functions used in all classes
#include"student.h"//class containing student data
#include "ku_lecturer.h"///class containing lectures data
#include "admin_lec.h"//links administrator and lecture classes
#include "email_ku.h"//class dealing with all mails
using namespace std;
void display() {
AGAIN:system("CLS");//specific point in the code,clears everything in the console
	utilities main;//utility function(creates object of utulities class)
	main.borders();//calls the border line function(object of utilities)
	main.gotoXY(3, 6);//function of utilities
	cout << "Chose Your Option:";
	main.gotoXY(3, 7); cout << "-------------------";
	main.gotoXY(22, 5); cout << "   ________________________________";
	main.gotoXY(22, 6); cout << "1.| ADMININISTRATOR OR LECTURER    |";
	main.gotoXY(22, 7); cout << "  |________________________________|";
	main.gotoXY(22, 8); cout << "2.| STUDENT                        |";
	main.gotoXY(22, 9); cout << "  |________________________________|";

	main.gotoXY(70, 27); cout << "  +-----------+";
	main.gotoXY(70, 28); cout << "3.|    EXIT   |";
	main.gotoXY(70, 29); cout << "  +-----------+";
	int option;
	main.gotoXY(22, 18); cout << "+----+";
	main.gotoXY(22, 20); cout << "+----+";
	main.gotoXY(3, 19); cout << "Input you option : |    |"; main.gotoXY(24, 19); option=main.input_int();
	switch (option)
	{
	case (1) : {system("CLS");
			callclass ff; ff.display1();//calls the callclass class
			goto AGAIN;
		}
	case (2) : {system("CLS");
		student ss; goto AGAIN;
	}
	case(3) : {system("CLS");
		main.gotoXY(30, 15); cout << "EXITING ~"; main.clocker(5);
	}break;
	default: {
		cout << "wrong Input~~~~ Input again"; system("CLS"); goto AGAIN;
	}
		break;
	}
}

int main() {
	try {
		display();
		//student ss;
		//callclass ff; ff.display1();
		//admin ss; ss.reg_student();
		//ff.forgotten();
		//ff.reg();
		//ff.login();
		//ff.mail_creat("innocent@gamil.com", "admisn");
		kuportal y;
		student_portal s;
		int g = 5;
		clock_t t1, t2;
		t1 = clock(); t2 = clock();
		int t, l = 1; t = (int)((float)t2 - (float)t1) / CLOCKS_PER_SEC;
		while (g > t) {
			t = (int)((float)t2 - (float)t1) / CLOCKS_PER_SEC;
			if (t == l) {
				system("CLS");
				cout << "WELCOME\t" << g - t; l++;
			}

			t2 = clock();
		}
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line "
			<< __LINE__ << endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() <<
			" )" << endl;
		system("pause");
		cout << endl; return false;
	}
	return false;
	//y.display(); 
	return 0;
	

		
}
