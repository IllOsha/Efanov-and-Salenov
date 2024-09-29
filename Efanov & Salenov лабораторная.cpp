
//ЛАБА НОМЕР 1 (Ефанов и Саленов)
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	double fin, k, T, w,A,x;
//	cout << "ввести коэф k" << endl;
//	cin >> k;
//	cout << "ввести частоту w " << endl;
//	cin >> w;
//	cout << "ввести амплитуду A" << endl;
//	cin >> A;
//	
//	fin = (asin(1 / k));
//	T = (((M_PI / 2) - fin) / w);
//	x = (A * sin(w * T + fin));
//
//	cout << fixed << setprecision(2);
//	cout << "нашли x" << x<< endl;
//
//	return 0;
//}

//ЛАБА НОМЕР 2
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	double H, T, V, g, a, x, y;
//	g = 9.8;
//	cout << "ввести H " << endl;
//	cin >> H;
//	cout << "ввести V" << endl;
//	cin >> V;
//	cout << "ввести a" << endl;
//	cin >> a;
//
//	T = (((V * sin(a)) / g * (1 + sqrt(1 + (2 * g * H) / ((V * V) * (sin(a) * sin(a)))))));
//	x = (V * (T * cos(a)));
//	y = (H + (V * T * sin(a)) - ((1 / 2 * g) * (T * T)));
//
//	cout << fixed << setprecision(2);
//	cout << "нашли x = " << x << endl;
//	cout << "нашли y = " << y << endl;
//	return 0;
//}


//LABA NOMER 3
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	double f, g, x;
//	cout << "ввести x" << endl;
//	cin >> x;
//	if (-4 < x < -1) {
//		g = ((abs(x + 6)) / (abs(x + 3) - 3));
//	}
//	else if (-1 < x < 5) {
//		g = (sqrt(5 - x) - 2);
//	}
//	else if (x >= 5) {
//		g = (log(x + 10) - 2);
//	}
//	if (g < -2) {
//		f = (abs(g / 1 - g));
//	}
//	else if (-2 <= g <= 1) {
//		f = pow((g + 2), 2);
//	}
//	cout << fixed << setprecision(2);
//	if (x < -4){
//		cout << "вычислеть невозможно вне домена" << endl;
//	}
//	else {
//		cout << "нашли g(x)" << g << endl;
//	}
//	if (g > 1) {
//		cout << "вычислеть невозможно вне домена" << endl;
//	}
//	else {
//		cout << "нашли f(x)" << f << endl;
//	}
//	
//	return 0;
//
//}

//LABA NOMER 4
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int discount, vznoscount, creditType;
//	char category, clientType;
//	string clientCategory, paymentType;
//	double initialPrice, percentstavka, itogPrice;
//	cout << "Введите категорию товара (A, B, C): ";
//	cin >> category;
//	cout << "Введите категорию клиента (отличные, хорошие, средние, плохие): ";
//	cin >> clientCategory;
//	cout << "Введите первоначальную стоимость товара: ";
//	cin >> initialPrice;
//	switch (category) {
//	case 'A':
//		if (clientCategory == "отличные")
//		{
//			discount = 40;
//			paymentType = "наличные, чек, кредит";
//		}
//		if (clientCategory == "хорошие")
//		{
//			discount = 30;
//			paymentType = "наличные, чек, кредит";
//		}
//		if (clientCategory == "средние")
//		{
//			discount = 20;
//			paymentType = "наличные, чек";
//		}
//		if (clientCategory == "плохие")
//		{
//			discount = 0;
//			paymentType = "наличные";
//		}
//		break;
//	case 'B':
//		if (clientCategory == "отличные")
//		{
//			discount = 30;
//			paymentType = "наличные, чек, кредит";
//		}
//		if (clientCategory == "хорошие")
//		{
//			discount = 20;
//			paymentType = "наличные, чек, кредит";
//		}
//		if (clientCategory == "средние")
//		{
//			discount = 10;
//			paymentType = "наличные, чек";
//		}
//		if (clientCategory == "плохие")
//		{
//			discount = -5;
//			paymentType = "наличные";
//		}
//		break;
//	case 'C':
//		if (clientCategory == "отличные")
//		{
//			discount = 20;
//			paymentType = "наличные, чек, кредит";
//		}
//		if (clientCategory == "хорошие")
//		{
//			discount = 10;
//			paymentType = "наличные, чек, кредит";
//		}
//		if (clientCategory == "средние")
//		{
//			discount = 0;
//			paymentType = "наличные, чек";
//		}
//		if (clientCategory == "плохие")
//		{
//			discount = -10;
//			paymentType = "наличные";
//		}
//		break;
//	}
//	cout << "Доступные для вас способы оплаты: " << paymentType << endl;
//	cout << "Выберите тип оплаты(A - Наличные, B - Чек, C - Кредит) : " << endl;
//	cin >> clientType;
//	switch (clientType) {
//	case 'A':
//		itogPrice = initialPrice - 0.01 * (discount * initialPrice);
//	case 'B':
//		cout << "Введите кол-во взносов: " << endl;
//		cin >> vznoscount;
//		cout << "Введите процентную ставку(от 3 до 15%): " << endl;
//		cin >> percentstavka;
//		itogPrice = initialPrice * (1 + percentstavka * vznoscount / 100);
//		itogPrice = itogPrice - 0.01 * (discount * itogPrice);
//	case 'C':
//		cout << "Введите кол-во платежей(от 1 до 6): " << endl;
//		cin >> vznoscount;
//		cout << "Введите тип кредита(Платиновый - 1, Бизнес - 2): " << endl;
//		cin >> creditType;
//		if (creditType == 1) {
//			percentstavka = 5;
//		}
//		else {
//			percentstavka = 2;
//		}
//		itogPrice = pow(initialPrice * (1 + percentstavka / 100), vznoscount);
//		itogPrice = itogPrice - 0.01* (discount * itogPrice);
//	}
//	cout << fixed << setprecision(2);
//	cout << "Окончательная стоимость после применения скидок: " << itogPrice << endl;
//	return 0;
//}



//LABA NOMER 4
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y,z;
	char kat, clientTy;
	string clientC, pt;
	double fprice, stavka, konprice;
	cout << "Введите категорию товара (A, B, C): ";
	cin >> kat;
	cout << "Введите категорию клиента (отличные, хорошие, средние, плохие): ";
	cin >> clientC;
	cout << "Введите первоначальную стоимость товара: ";
	cin >> fprice;
	switch (kat) {
	case 'A':
		if (clientC == "отличные")
		{
			x = 40;
			pt = "наличные, чек, кредит";
		}
		if (clientC == "хорошие")
		{
			x = 30;
			pt = "наличные, чек, кредит";
		}
		if (clientC == "средние")
		{
			x = 20;
			pt = "наличные, чек";
		}
		if (clientC == "плохие")
		{
			x = 0;
			pt = "наличные";
		}
		break;
	case 'B':
		if (clientC == "отличные")
		{
			x = 30;
			pt = "наличные, чек, кредит";
		}
		if (clientC == "хорошие")
		{
			x = 20;
			pt = "наличные, чек, кредит";
		}
		if (clientC == "средние")
		{
			x = 10;
			pt = "наличные, чек";
		}
		if (clientC == "плохие")
		{
			x = -5;
			pt = "наличные";
		}
		break;
	case 'C':
		if (clientC == "отличные")
		{
			x = 20;
			pt = "наличные, чек, кредит";
		}
		if (clientC == "хорошие")
		{
			x = 10;
			pt = "наличные, чек, кредит";
		}
		if (clientC == "средние")
		{
			x = 0;
			pt = "наличные, чек";
		}
		if (clientC == "плохие")
		{
			x = -10;
			pt = "наличные";
		}
		break;
	}
	cout << "способы оплаты: " << pt << endl;
	cout << "тип оплаты(A - Наличные, B - Чек, C - Кредит) : " << endl;
	cin >> clientTy;
	switch (clientTy) {
	case 'A':
		konprice = fprice - 0.01 * (x * fprice);
	case 'B':
		cout << "Введите кол-во взносов: " << endl;
		cin >> y;
		cout << "Введите процентную ставку( 3% до 15%): " << endl;
		cin >> stavka;
		konprice = konprice * (1 + stavka * y / 100);
		konprice = konprice - 0.01 * (x * konprice);
	case 'C':
		cout << " кол-во платежей(от 1 до 6): " << endl;
		cin >> y;
		cout << " тип кредита(Платиновый - 1, Бизнес - 2): " << endl;
		cin >> z;
		if (z == 1) {
			stavka = 5;
		}
		else {
			stavka = 2;
		}
		konprice = pow(konprice * (1 + stavka / 100),y);
		konprice = konprice - 0.01* (x * konprice);
	}
	cout << fixed << setprecision(2);
	cout << "Окончательная стоимость : " <<konprice << endl;
	return 0;
}