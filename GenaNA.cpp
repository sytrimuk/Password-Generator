#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <locale>
#include <windows.h>
#include <ctime>
#include <vector>
#include <deque>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
setlocale(LC_ALL, "Russian");
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
system("color 70" );

	//�����
	int zagad, mass, aq, zagadP = 0;
	bool zapros;
	char nn;

	//���� ��������
	char pchar[67] = {

			 '0',
		'1', '2', '3',
		'4', '5', '6',
		'7', '8', '9',

		'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p',
		'q', 'r', 's', 't',
		'u', 'v', 'w', 'x',
			 'y', 'z',

		'A', 'B', 'C', 'D',
		'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X',
			 'Y', 'Z',

		'_', '$', '!', '?', '&'
	};
    //������
	vector<char> password;

	srand(time(NULL));

	while(true){
		cout << "���� ������ ������ ������������ ������, �� ������� 1\n���� ���, �� 0" << endl;
		cin >> zapros;
        system("cls");

		if (zapros == 1){
			cout << "������� �������� ����� � ������: ";
			cin >> zagad;
			zagadP = zagad;
			system("cls");

			while (zagad != 0){
				if(zagad > 247) {
					int qwe = rand();
					srand(qwe);

					int q = rand();
					srand(q);

					aq = q + pow(zagad, 1);
					srand(aq);

					aq = rand();
					srand(aq);

					int wasd = rand();
                    srand(wasd);
				}

			    else{
				   int qwe = rand();
				   srand(qwe);

				   int q = rand();
				   srand(q);

				   aq = q + pow(zagad, 3);
				   srand(aq);

				   aq = rand();
				   srand(aq);
				}

				mass = rand() % 62;
				nn = pchar[mass];
				password.push_back(nn);

				//�����
				/*cout << "��� zagad " << zagad << endl;
				cout << "��� q " << q << endl;
				cout << "��� mass " << mass << endl;
				cout << "��� aq " << aq << endl;
				cout << "��� qwe " << qwe << endl;
				cout << endl;*/
				zagad--;
			}

			cout << "====================================================================================" << endl;
			for (int i = 0; i < zagadP; i++) {
				cout << password[i];
			}
			cout << endl << "====================================================================================" << endl;

			cout << "����� ������� ��� ���� ������ ������� Enter" << endl;

			system("PAUSE");
			password.clear();
			system("cls");
		}
		else{break;}
	}

	system("PAUSE");
	return 0;
}
