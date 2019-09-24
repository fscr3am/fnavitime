#include "stdafx.h"
#include <string>	
using namespace std;
// 	6
double Kocaeli = 3.4;
// 4,34	
int Edirne = 343;
// 	4,11
int Kırıkkale = 423;
// 4,7	
int Tekirdağ = 250;
// 2,2	
int İstanbul = 106;
// 41	
double Sakarya = 52.4;
// 1,37
int Bilecik = 143;
// 1,2
double Yalova = 79.3;
//	1,46
int Bursa = 135;
//	3,10
int Balıkesir = 280;
// 3,10	
int Çanakkale = 399;
// 4 saat 40 dakika.
string SELECTİON;
string New_Location;
int zaman = 0;
int dakika = 0;



//  Timer fonksiyonu.
void Timer() {
	int sec = 0;
	int min = 0;
	int hour = 0;
second:
	for (int a = 0; a<60; ++a) {
		Sleep(1000);
		sec++;
		system("Cls");
		cout << "\n\n\t\t" << hour << ":" << min << ":" << sec;

		if (sec == 59) {
			sec = 0;
			min++;
			goto second;
		}
		if (min == 59) {
			min = 0;
			hour++;
			goto second;
		}
		if (hour == zaman && min == dakika) {
			for (int b = 0; b < 10; b++) {
				cout << "\t\t" << "\nİstenilen Noktaya Gelindi.";
				cout << "\a";
				Sleep(10000);
				sec = 0;
				min = 0;
				hour = 0;
				zaman = 0;
				dakika = 0;
				system("Cls");
				
			}
		}
	}
}

void Konum() {
	Location:
	string Spawn_Point;
	string spawn = "Symbol AVM";

	cout << "Nerede bulunuyorsunuz :"; cin >> Spawn_Point;
	if (Spawn_Point == "Kocaeli") {
		cout << "6 dakika >>" << spawn << endl;
		cout << Kocaeli << " Km";
		New_Location = Kocaeli;
		dakika = 6;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "Edirne") {
		cout << "4 saat 34 dakika >>" << spawn << endl;
		cout << Edirne << " Km";
		New_Location = Edirne;
		zaman = 4;
		dakika = 34;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "Kırıkkale") {
		cout << "4 saat 11 dakika >>" << spawn << endl;
		cout << Kırıkkale << " Km";
		New_Location = Edirne;
		zaman = 4;
		dakika = 11;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "Tekirdağ") {
		cout << "4 saat 7 dakika >>" << spawn << endl;
		cout << Tekirdağ << " Km";
		New_Location = Tekirdağ;
		zaman = 4;
		dakika = 7;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "İstanbul") {
		cout << "2 saat 2 dakika >>" << spawn << endl;
		cout << İstanbul << " Km";
		New_Location = İstanbul;
		zaman = 2;
		dakika = 2;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "Sakarya") {
		cout << "41 dakika >>" << spawn << endl;
		cout << Sakarya << " Km";
		New_Location = Sakarya;
		dakika = 41;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "Bilecik") {
		cout << "1 saat 37 dakika >>" << spawn << endl;
		cout << Bilecik << " Km";
		New_Location = Bilecik;
		zaman = 1;
		dakika = 37;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "Yalova") {
		cout << "1 saat 2 dakika >>" << spawn << endl;
		cout << Yalova << " Km";
		New_Location = Yalova;
		zaman = 1;
		dakika = 2;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "Bursa") {
		cout << "1 saat 46 dakika >>" << spawn << endl;
		cout << Bursa << " Km";
		New_Location = Bursa;
		zaman = 1;
		dakika = 46;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "Balıkesir") {
		cout << "3 saat 10 dakika >>" << spawn << endl;
		cout << Balıkesir << " Km";
		New_Location = Balıkesir;
		zaman = 3;
		dakika = 10;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else if (Spawn_Point == "Çanakkale") {
		cout << "4 saat 40 dakika >>" << spawn << endl;
		cout << Çanakkale << " Km";
		New_Location = Çanakkale;
		zaman = 4;
		dakika = 40;
		Sleep(3000);
		Timer();
		system("Cls");
		goto Location;
	}
	else {
	cout << "Sadece marmara bölgesi.";
	Sleep(3000);
	goto Location;
}
	
}



int main() {
	Konum();


}
