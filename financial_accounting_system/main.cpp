#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Authorization
{
	string login;
	string password;
	bool log;
	bool pass;

public:
	void AuthLogin(string login);
	void AuthPassword(string password);
	void EnterLogin(string login);
	void EnterPassword(string password);
	void DeleteLogin();
	void DeletePassword();
	bool Check();
};

void Enter_Data_Income(int choise);
void Enter_Data_Expenditure(int choise);
void Read_Data_Income(int choise);
void Read_Data_Expenditure(int choise);
void Delete_Data_Income(int choise);
void Delete_Data_Expenditure(int choise);
void DeleteExtra_Data_Income();
void DeleteExtra_Data_Expenditure();
int  Years_Data_Income();
int  Years_Data_Expenditure();
void Diagram_Income();
void Diagram_Expenditure();
void MonthTxt();

int main()
{
	setlocale(LC_ALL, "rus");
	Authorization user1;
	int  choiseMain;
	bool flagMain = false;
	bool check = false;
	int  choise;
	int choiseEnter;
	cout << "Приложение система учёта финансов, которая позволяет вести учёт расходов и доходов." << endl;
	system("pause");
	system("cls");
	do
	{
		cout << " Меню входа " << endl
			<< "1 - Авторизация нового пользователя" << endl
			<< "2 - Войти в главное меню" << endl
			<< "3 - Выход из программы" << endl;
		cin >> choiseEnter;
		system("pause");
		system("cls");
		switch (choiseEnter)
		{
		case 1:
			user1.AuthLogin("");
			user1.AuthPassword("");
			system("pause");
			system("cls");
			break;
		case 2:
			user1.EnterLogin("");
			user1.EnterPassword("");
			user1.Check();
			system("pause");
			system("cls");
			break;
		case 3:
			exit(choiseEnter == 3);
			break;
		default:
			cout << "Данной команды не существует" << endl;
			break;
		}
	} while (!user1.Check());
		
	user1.DeleteLogin();
	user1.DeletePassword();
	system("cls");

	do
	{
		    cout <<   "Главное меню " << endl
			<< "1 - Ввести данные об доходах" << endl
			<< "2 - Ввести данные об расходах" << endl
			<< "3 - Доход за месяц" << endl
			<< "4 - Расходы за месяц" << endl
			<< "5 - Удаление данных об доходах"<<endl
			<< "6 - Удаление данных об расходах" << endl
			<< "7 - Доход за год" << endl
			<< "8 - Расходы за год" << endl
			<< "9 - Выход" << endl;
		cin >> choiseMain;
		system("pause");
		system("cls");
		switch (choiseMain)
		{
		   case 1:
			  do
			{
				MonthTxt();
				cin>>choise;
				switch (choise)
				{
				case 1:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 2:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 3:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 4:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 5:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 6:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 7:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 8:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 9:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 10:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 11:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 12:
					Enter_Data_Income(choise);
					system("pause");
					system("cls");
					break;
				case 13:
					check = true;
					break;
				default:
						cout << "Данного месяца не сущетсвует!" << endl;
						system("pause");
						system("cls");
					break;
				}
			} while (!check);
			  check = false;
			  system("pause");
			  system("cls");
			  break;
		   case 2:
			   do
			   {
				   MonthTxt();
				   cin >> choise;
				   switch (choise)
				   {
				   case 1:
					   Enter_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 2:
					   Enter_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 3:
					   Enter_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 4:
					   Enter_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 5:
					   Enter_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 6:
					   Enter_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 7:
					   Enter_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 8:
					   Enter_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 9:
					   Enter_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 10:
					   Enter_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 11:
					   Enter_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 12:
					   Enter_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 13:
					   check = true;
					   break;
				   default:
					   cout << "Данного месяца не сущетсвует!" << endl;
					   system("pause");
					   system("cls");
					   break;
				   }
			   } while (!check);
			   check = false;
			   system("pause");
			   system("cls");
			   break;
		   case 3:
			   do
				{
					MonthTxt();
					cin >> choise;
					switch (choise)
					{
					case 1:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 2:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 3:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 4:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 5:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 6:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 7:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 8:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 9:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 10:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 11:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 12:
						Read_Data_Income(choise);
						system("pause");
						system("cls");
						break;
					case 13:
						check = true;
						break;
					    default:
						cout << "Данного месяца не сущетсвует!" << endl;
						system("pause");
						system("cls");
						break;
					}

				} while (!check);
			   check = false;
			   system("pause");
			   system("cls");
			break;
		   case 4:
			   do
			   {
				   MonthTxt();
				   cin >> choise;
				   switch (choise)
				   {
				   case 1:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 2:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 3:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 4:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 5:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 6:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 7:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 8:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 9:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 10:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 11:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 12:
					   Read_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 13:
					   check = true;
					   break;
				   default:
					   cout << "Данного месяца не сущетсвует!" << endl;
					   system("pause");
					   system("cls");
					   break;
				   }
			   } while (!check);
			   check = false;
			   system("pause");
			   system("cls");
			   break;
		   case 5:
			   do
			   {
				   MonthTxt();
				   cout << "Введите 0 чтоб очистить все данные об доходах" << endl;
				   cin >> choise;
				   switch (choise)
				   {
				   case 1:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 2:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 3:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 4:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 5:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 6:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 7:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 8:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 9:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 10:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 11:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 12:
					   Delete_Data_Income(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 13:
					   check = true;
					   break;
				   case 0:
					   DeleteExtra_Data_Income();
					   system("pause");
					   system("cls");
					   break;
				   default:
					   cout << "Данного месяца не сущеcтвует!" << endl;
					   system("pause");
					   system("cls");
					   break;
				   }
			   } while (!check);
			   check = false;
			   system("pause");
			   system("cls");
			   break;
		   case 6:
			   do
			   {
				   MonthTxt();
				   cout << "Введите 0 чтоб очистить все данные об расходах" << endl;
				   cin >> choise;
				   switch (choise)
				   {
				   case 1:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 2:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 3:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 4:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 5:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 6:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 7:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 8:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 9:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 10:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 11:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 12:
					   Delete_Data_Expenditure(choise);
					   system("pause");
					   system("cls");
					   break;
				   case 13:
					   check = true;
					   break;
				   case 0:
					   DeleteExtra_Data_Expenditure();
					   system("pause");
					   system("cls");
					   break;
				   default:
					   cout << "Данного месяца не сущеcтвует!" << endl;
					   system("pause");
					   system("cls");
					   break;
				   }
			   } while (!check);
			   check = false;
			   system("pause");
			   system("cls");
			   break;
		   case 7:
			   cout << "Доход за год составляет: " << Years_Data_Income() << endl;
			   system("pause");
			   system("cls");
			   break;
		   case 8:
			   cout << "Расходы за год составляют: " << Years_Data_Expenditure() << endl;
			   system("pause");
			   system("cls");
			   break;
		   case 9:
			   flagMain = true;
			   break;
		    default:
			   cout << "Данной команды не существует попробуйте снова!" << endl;
			   break;
		}
	} while (!flagMain);
}

void Authorization::AuthLogin(string login)
{
	string path = "Login.txt";;
	ofstream enterLog;
	try
	{
		enterLog.open(path);
		cout << "Введите новый логин:" << endl;
		cin >> login;
		enterLog << login;
		this->login = login;
		enterLog.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void Authorization::AuthPassword(string password)
{
	string path = "Password.txt";
	ofstream enterLog;
	try
	{
		enterLog.open(path);
		cout << "Введите новый пароль:" << endl;
		cin >> password;
		enterLog << password;
		this->password = password;
		enterLog.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void Authorization::EnterLogin(string login)
{
	cin.get();
	string path = "Login.txt";
	ifstream readLog;
	try
	{
		readLog.open(path);
		if (readLog.peek() == EOF) cout << "Для входа необходимо пройти регистрацию нового пользователя." << endl;
		else
		{
			cout << "Введите логин :" << endl;
			cin >> login;
			while (!readLog.eof())
			{
				readLog >> this->login;
				getline(readLog, this->login);
				if (login == this->login) this->log = true;
			}
		}
		readLog.close();

	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}

}
void Authorization::EnterPassword(string password)
{
	cin.get();
	string path = "Password.txt";
	ifstream readPass;
	bool check = false;
	try
	{
		readPass.open(path);
		if (readPass.peek() == EOF);

		else
		{
			cout << "Введите пароль :" << endl;
			cin >> password;
			while (!readPass.eof())
			{
				readPass >> this->password;
				getline(readPass, this->password);
				if (password == this->password) this->pass = true;
			}
		}
		readPass.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void Authorization::DeleteLogin()
{
	string path = "Login.txt";
	ifstream del;
	try
	{
		del.open(path, ifstream::out | ifstream::trunc);
		if (del.peek() == EOF) cout << "Этот файл пустой" << endl;
		del.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void Authorization::DeletePassword()
{
	string path = "Password.txt";
	ifstream del;
	try
	{
		del.open(path, ifstream::out | ifstream::trunc);
		if (del.peek() == EOF) cout << "Этот файл пустой" << endl;
		del.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
bool Authorization::Check()
{
	bool mainCheck = false;
	if (log && pass == true) mainCheck = true;
	return mainCheck;
}

void Enter_Data_Income(int choise)
{
	cin.get();
	string path;
	if (choise == 1)  path = "January.txt";
	if (choise == 2)  path = "February.txt";
	if (choise == 3)  path = "March.txt";
	if (choise == 4)  path = "April.txt";
	if (choise == 5)  path = "May.txt";
	if (choise == 6)  path = "June.txt";
	if (choise == 7)  path = "July.txt";
	if (choise == 8)  path = "August.txt";
	if (choise == 9)  path = "September.txt";
	if (choise == 10) path = "October.txt";
	if (choise == 11) path = "November.txt";
	if (choise == 12) path = "December.txt";

	string notes;
	ofstream enter;
	try
	{
		enter.open(path, ofstream::app);
		cout << "Введите доход за текущий месяц" << endl;
		getline(cin, notes);
		enter << notes << "\n";
		enter.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void Enter_Data_Expenditure(int choise)
{
	cin.get();
	string path;
	if (choise == 1)  path = "JanuarExp.txt";
	if (choise == 2)  path = "FebruaryExp.txt";
	if (choise == 3)  path = "MarchExp.txt";
	if (choise == 4)  path = "AprilExp.txt";
	if (choise == 5)  path = "MayExp.txt";
	if (choise == 6)  path = "JuneExp.txt";
	if (choise == 7)  path = "JulyExp.txt";
	if (choise == 8)  path = "AugustExp.txt";
	if (choise == 9)  path = "SeptemberExp.txt";
	if (choise == 10) path = "OctoberExp.txt";
	if (choise == 11) path = "NovemberExp.txt";
	if (choise == 12) path = "DecemberExp.txt";

	string notes;
	ofstream enter;
	try
	{
		enter.open(path, ofstream::app);
		cout << "Введите расходы за текущий месяц" << endl;
		getline(cin, notes);
		enter << notes << "\n";
		enter.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void Read_Data_Income(int choise)
{
	string path;
	if (choise ==1)   path = "January.txt";
	if (choise == 2)  path = "February.txt";
	if (choise == 3)  path = "March.txt";
	if (choise == 4)  path = "April.txt";
	if (choise == 5)  path = "May.txt";
	if (choise == 6)  path = "June.txt";
	if (choise == 7)  path = "July.txt";
	if (choise == 8)  path = "August.txt";
	if (choise == 9)  path = "September.txt";
	if (choise == 10) path = "October.txt";
	if (choise == 11) path = "November.txt";
	if (choise == 12) path = "December.txt";
	
	string notes;
	ifstream read;
	try
	{
		read.open(path,ifstream::in);
	    if (read.peek() == EOF) cout << "Этот файл пустой" << endl;
		else
		{
			cout << "Доход за текущий месяц: " << endl;
			while (!read.eof())
			{
				notes = "";
				getline(read, notes);
				cout << notes << endl;
			}
		}
			read.close();
		
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void Read_Data_Expenditure(int choise)
{
	string path;
	if (choise == 1)  path = "JanuarExp.txt";
	if (choise == 2)  path = "FebruaryExp.txt";
	if (choise == 3)  path = "MarchExp.txt";
	if (choise == 4)  path = "AprilExp.txt";
	if (choise == 5)  path = "MayExp.txt";
	if (choise == 6)  path = "JuneExp.txt";
	if (choise == 7)  path = "JulyExp.txt";
	if (choise == 8)  path = "AugustExp.txt";
	if (choise == 9)  path = "SeptemberExp.txt";
	if (choise == 10) path = "OctoberExp.txt";
	if (choise == 11) path = "NovemberExp.txt";
	if (choise == 12) path = "DecemberExp.txt";

	string notes;
	ifstream read;
	try
	{
		read.open(path, ifstream::in);
		if (read.peek() == EOF) cout << "Этот файл пустой" << endl;
		else
		{
			cout << "Расходы за текущий месяц: " << endl;
			while (!read.eof())
			{
				notes = "";
				getline(read, notes);
				cout << notes << endl;
			}
		}
		read.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void Delete_Data_Income(int choise)
{
	string path;
	ifstream del;
	if (choise == 1)  path = "January.txt";
	if (choise == 2)  path = "February.txt";
	if (choise == 3)  path = "March.txt";
	if (choise == 4)  path = "April.txt";
	if (choise == 5)  path = "May.txt";
	if (choise == 6)  path = "June.txt";
	if (choise == 7)  path = "July.txt";
	if (choise == 8)  path = "August.txt";
	if (choise == 9)  path = "September.txt";
	if (choise == 10) path = "October.txt";
	if (choise == 11) path = "November.txt";
	if (choise == 12) path = "December.txt";
	
	try
	{
		del.open(path, ifstream::out | ifstream ::trunc);
		if (del.peek() == EOF) cout << "Этот файл пустой" << endl;
		del.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void Delete_Data_Expenditure(int choise)
{
	string path;
	ifstream del;
	if (choise == 1)  path = "JanuarExp.txt";
	if (choise == 2)  path = "FebruaryExp.txt";
	if (choise == 3)  path = "MarchExp.txt";
	if (choise == 4)  path = "AprilExp.txt";
	if (choise == 5)  path = "MayExp.txt";
	if (choise == 6)  path = "JuneExp.txt";
	if (choise == 7)  path = "JulyExp.txt";
	if (choise == 8)  path = "AugustExp.txt";
	if (choise == 9)  path = "SeptemberExp.txt";
	if (choise == 10) path = "OctoberExp.txt";
	if (choise == 11) path = "NovemberExp.txt";
	if (choise == 12) path = "DecemberExp.txt";

	try
	{
		del.open(path, ifstream::out | ifstream::trunc);
		if (del.peek() == EOF) cout << "Этот файл пустой" << endl;
		del.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
	}
}
void DeleteExtra_Data_Income()
{
	string path;
	ifstream del;
	for (int i = 1; i <= 12; i++)
	{
		if (i == 1)  path = "January.txt";
		if (i == 2)  path = "February.txt";
		if (i == 3)  path = "March.txt";
		if (i == 4)  path = "April.txt";
		if (i == 5)  path = "May.txt";
		if (i == 6)  path = "June.txt";
		if (i == 7)  path = "July.txt";
		if (i == 8)  path = "August.txt";
		if (i == 9)  path = "September.txt";
		if (i == 10) path = "October.txt";
		if (i == 11) path = "November.txt";
		if (i == 12) path = "December.txt";

		try
		{
			del.open(path, ifstream::out | ifstream::trunc);
			if (del.peek() == EOF) cout << "Этот файл пустой" << endl;
			del.close();
		}
		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
			cout << "Что-то пошло не так!" << endl;
		}
	}
}
void DeleteExtra_Data_Expenditure()
{
	string path;
	ifstream del;
	for (int i = 1; i <= 12; i++)
	{
		if (i == 1)  path = "JanuarExp.txt";
		if (i == 2)  path = "FebruaryExp.txt";
		if (i == 3)  path = "MarchExp.txt";
		if (i == 4)  path = "AprilExp.txt";
		if (i == 5)  path = "MayExp.txt";
		if (i == 6)  path = "JuneExp.txt";
		if (i == 7)  path = "JulyExp.txt";
		if (i == 8)  path = "AugustExp.txt";
		if (i == 9)  path = "SeptemberExp.txt";
		if (i == 10) path = "OctoberExp.txt";
		if (i == 11) path = "NovemberExp.txt";
		if (i == 12) path = "DecemberExp.txt";

		try
		{
			del.open(path, ifstream::out | ifstream::trunc);
			if (del.peek() == EOF) cout << "Этот файл пустой" << endl;
			del.close();
		}
		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
			cout << "Что-то пошло не так!" << endl;
		}
	}
}
int  Years_Data_Income()
{
	int sum = 0;
	const char* buffer;
	for (int i = 1; i <= 12; i++)
	{
		string path;
		string notes;
		ifstream read;
		
		if(i ==1) path = "January.txt";
		if (i== 2)  path = "February.txt";
		if (i== 3)  path = "March.txt";
		if (i== 4)  path = "April.txt";
		if (i== 5)  path = "May.txt";
		if (i== 6)  path = "June.txt";
		if (i== 7)  path = "July.txt";
		if (i== 8)  path = "August.txt";
		if (i== 9)  path = "September.txt";
		if (i== 10) path = "October.txt";
		if (i== 11) path = "November.txt";
		if (i== 12) path = "December.txt";

		try
		{
			read.open(path, ifstream::in);
			while (!read.eof())
			{
				notes = "";
				getline(read, notes);
				buffer = notes.c_str();
				sum += atoi(buffer);
			}
		}
		
		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
			cout << "Что-то пошло не так!" << endl;
		}
		read.close();
	}
	return sum;
}
int  Years_Data_Expenditure()
{
	int sum1 = 0;
	const char* buffer1;
	for (int i = 1; i <= 12; i++)
	{
		string path;
		string notes;
		ifstream read;

		if (i == 1) path = "JanuarExp.txt";
		if (i == 2)  path = "FebruaryExp.txt";
		if (i == 3)  path = "MarchExp.txt";
		if (i == 4)  path = "AprilExp.txt";
		if (i == 5)  path = "MayExp.txt";
		if (i == 6)  path = "JuneExp.txt";
		if (i == 7)  path = "JulyExp.txt";
		if (i == 8)  path = "AugustExp.txt";
		if (i == 9)  path = "SeptemberExp.txt";
		if (i == 10) path = "OctoberExp.txt";
		if (i == 11) path = "NovemberExp.txt";
		if (i == 12) path = "DecemberExp.txt";

		try
		{
			read.open(path, ifstream::in);

			while (!read.eof())
			{
				notes = "";
				getline(read, notes);
				buffer1 = notes.c_str();
				sum1 += atoi(buffer1);
			}
		}

		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
			cout << "Что-то пошло не так!" << endl;
		}
		read.close();
	}
	return sum1;
}
void MonthTxt()
{
	string path = "Month.txt";
	string msg;
	ifstream read;
	try
	{
		read.open(path);
		while (!read.eof())
		{
			msg = "";
			getline(read, msg);
			cout << msg << endl;
		}
		read.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Что-то пошло не так!" << endl;
		system("pause");
		system("cls");
	}
}






