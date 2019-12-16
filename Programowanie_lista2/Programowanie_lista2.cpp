#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int imie_ile_a_1();
void od_tylu_2();
void duze_bez_spacji_3();
void kotek_piesek_4();
int pary_o_5();
void binarnie_6();
void binarnie_6_2();
void ciag_na_liczbe_7();
void abba_8();
void rozmiar_9();
void ilosc_znakow_10();
void skrajne_11();
void dodawanie_12();
void waz_13();
void odwroc_14(char* s, char* t);
void wypisz_ctring(char* s);
void litery_15(char* litery, char* zdanie);
bool anagramy_16(char* s, char* t);
void permutacje_17(int n);



int main()
{


	//cout<<imie_ile_a_1();
	//od_tylu_2();
	//duze_bez_spacji_3();
	//kotek_piesek_4();
	//cout << pary_o_5();
	//binarnie_6();
	//binarnie_6_2();
	//ciag_na_liczbe_7();
	//abba_8();
	//rozmiar_9();
	//ilosc_znakow_10();
	//skrajne_11();
	//dodawanie_12();
	//waz_13();
	/*
	char slowo[] = { "slowo" };
	char odwrotnie[1024]{};
	cout << "przed: "; wypisz_ctring(slowo);
	cout << "przed: "; wypisz_ctring(odwrotnie);
	odwroc_14(slowo,odwrotnie);
	cout << "po: "; wypisz_ctring(odwrotnie);
	*/
	/*
	char t[] = {"Ala ma kota"};
	char s[1024]{};
	wypisz_ctring(t);
	litery_15(s, t);
	wypisz_ctring(s);
	*/
	/*
	char t[] = { "kanonada" }; //sekret
	char s[] = { "anakonda" }; //kretes
	cout << anagramy_16(s, t);
	*/
	
	int n;
	cout << "Podaj n: ";
	cin >> n;
	permutacje_17(n);

}


int imie_ile_a_1()
{
	char tablica[1024]{ 0 };
	cout << "Podaj imie: ";
	cin.getline(tablica, 1024);
	char *wskc = tablica;
	int licznik = 0;
	while (*wskc!=0)
	{
		if (*wskc == 'a' or *wskc =='A') licznik++;
		wskc++;
	}
	return licznik;
}

void od_tylu_2()
{
	char tablica[1024]{ 0 };
	cout << "Podaj slowo do wypisania od konca: ";
	cin.getline(tablica, 1024);
	char* wskc = tablica;
	int licznik = 0;
	while (*wskc != 0)
	{
		licznik++;
		wskc++;
	}
	while (licznik > 0)
	{		
		licznik--;
		wskc--;
		cout << *wskc;
	}
}

void duze_bez_spacji_3()
{
	char tablica[1024]{};
	cout << "Podaj zdanie: ";
	cin.getline(tablica, 1024);
	char* wskc = tablica;
	while (*wskc != 0)
	{
		if (*wskc >= 'a' and *wskc <= 'z') cout << static_cast<char>(*wskc - ('a' - 'A'));
		else if (*wskc == ' ');
		else cout << *wskc;
		wskc++;
	}
}

void kotek_piesek_4()
{
	char tablica[1024]{};
	cout << "Podaj zdanie: ";
	cin.getline(tablica, 1024);
	char* wskc = tablica;
	while (*wskc != 0)
	{
		if (*wskc == 'k' and *(wskc + 1) == 'o' and *(wskc + 2) == 't' and *(wskc + 3) == 'e' and *(wskc + 4) == 'k')
		{
			cout << "piesek";
			wskc += 4;
		}
		else cout<< *wskc;
		wskc++;
	}
}

int pary_o_5()
{
	char tablica[1024]{};
	cout << "Podaj zdanie: ";
	cin.getline(tablica, 1024);
	char* wskc = tablica+1;
	int licznik = 0;
	while (*wskc != 0)
	{
		if ((*(wskc - 1) == 'o' or *(wskc - 1) == 'O') and (*(wskc) == 'o' or *(wskc) == 'O')) licznik++;
		wskc++;
	}
	return licznik;
}

void binarnie_6()
{
	int liczba;
	cout << "Podaj liczbe naturalna: ";
	cin >> liczba;	
	do {
		liczba % 2 == 0 ? cout << "0" : cout << "1";
		liczba /= 2;
	} while (liczba != 0);
}

void binarnie_6_2()
{
	int liczba;
	cout << "Podaj liczbe naturalna: ";
	cin >> liczba;
	int dlugosc = 0;
	int binarna[1024]{};
	do {
		liczba % 2 == 0 ? binarna[dlugosc] = 0 : binarna[dlugosc] = 1;
		liczba /= 2;
		dlugosc++;
	} while (liczba != 0);

	for (int i = dlugosc-1;i >= 0;i--)
	{
		cout << binarna[i];
	}
}

void ciag_na_liczbe_7()
{
	char tablica[1024]{};
	cout << "Podaj ciag znakow do zamiany: ";
	cin.getline(tablica, 1024);

	char* wskc = tablica;
	int liczba = 0, potega_10 = 0, czy_ujemna = 1;

	while (*wskc == '-' or (*wskc >= '0' and *wskc <= '9'))
	{
		if (*wskc == '-') czy_ujemna = -1;
		else
		{
			liczba = liczba * potega_10 + (*wskc-48);
			potega_10 = 10;
		}	
		wskc++;
	}
	cout << liczba*czy_ujemna;
}

void abba_8()
{
	char alfabet[] = { 'a','b','c' };
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			for (int k = 0;k < 3;k++)
			{
				for (int l = 0;l < 3;l++)
				{
					cout << alfabet[i] << alfabet[j] << alfabet[k] << alfabet[l] << " ";
				}
				cout << endl;
			}
		}
	}
}

void rozmiar_9()
{
	int tab1[20];
	float tab2[20];
	double tab3[20];
	int tab4[5][2];
	cout << sizeof(tab1) << endl;
	cout << sizeof(tab2) << endl;
	cout << sizeof(tab3) << endl;
	cout << sizeof(tab4) << endl;
}

void ilosc_znakow_10()
{
	string ciag_znakow;
	cin >> ciag_znakow;

	for (int i = 0;i < ciag_znakow.length() - 1;i++)
	{
		for (int j = 0;j < ciag_znakow.length() - 1;j++)
		{
			if (ciag_znakow[j] > ciag_znakow[j + 1]) swap(ciag_znakow[j], ciag_znakow[j + 1]);
		}
	}
	cout << ciag_znakow << endl;
	char znak=ciag_znakow[0];
	int licznik=0;
	for (int i = 0;i < ciag_znakow.length();i++)
	{
		if (ciag_znakow[i] == znak) licznik++;
		else
		{
			cout << "znak (" << znak << ") : " << licznik << endl;
			znak = ciag_znakow[i];
			licznik = 1;
		}
	}
	cout << "znak (" << znak << ") : " << licznik << endl;

}

void skrajne_11()
{
	double tablica[10]{};
	cout << "Podaj 10 liczb typu double: " << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << "[" << i + 1 << "] = ";
		cin >> tablica[i];
	}
	double min = tablica[0];
	double max = tablica[0];
	for (int i = 0;i < 10;i++)
	{
		if (tablica[i] < min)min = tablica[i];
		else if (tablica[i] > max)max = tablica[i];
	}
	cout << endl << "Podano liczby: " << endl;
	for (int i = 0;i < 10;i++)
	{
		if (i == 9) cout << tablica[i] << endl;
		else cout << tablica[i] << ", ";
	}
	cout << "Najmniejsza: " << min << endl;
	cout << "Najwieksza: " << max << endl;
}

void dodawanie_12()
{
	string pierwszy;
	string drugi;
	string wynik;
	
	cout << "Podaj pierwsza liczbe: ";
	cin >> pierwszy;
	cout << "Podaj druga liczbe: ";
	cin >> drugi;

	if (pierwszy.length() < drugi.length()) swap(pierwszy, drugi);

	int reszta = 0;
	int dodatnia = 0;
	int dodatnik = 0;

	for (int i = 1;i <= drugi.length();i++)
	{
		dodatnia = pierwszy.at(pierwszy.length() - i) - '0' + reszta;
		dodatnik = drugi.at(drugi.length() - i) - '0';
		reszta = 0;

		if ((dodatnia + dodatnik) > 9)
		{
			wynik.insert(0, 1, ((dodatnia + dodatnik) % 10) + '0');
			reszta = 1;
		}
		else
		{
			wynik.insert(0, 1, (dodatnia + dodatnik) + '0');
		}
	}
	for (int i = drugi.length()+1;i <= pierwszy.length();i++)
	{
		dodatnia = pierwszy.at(pierwszy.length() - i) - '0' + reszta;
		reszta = 0;
		wynik.insert(0, 1, (dodatnia)+'0');
	}
	if(reszta==1) wynik.insert(0, 1, '1');
	cout <<"wynik: "<< wynik;
}

void waz_13()
{
	int n;
	bool blad = false;
	int kierunek;

	cout << "Jak dlugi jest waz? ";
	cin >> n; n++;

	int* *pozycja = new int*[n];
	for (int i = 0;i < n;i++)
	{
		pozycja[i] = new int[2]{};
	}

	for (int i = 1;i < n;i++)
	{
		cout << "Podaj kierunek: ";
		cin.clear();
		//cin.ignore();
		cin >> kierunek;

		if (kierunek == 1)
		{
			pozycja[i][0] = pozycja[i - 1][0];
			pozycja[i][1] = pozycja[i - 1][1] + 1;
		}
		else if (kierunek == 2)
		{
			pozycja[i][0] = pozycja[i - 1][0];
			pozycja[i][1] = pozycja[i - 1][1] - 1;
		}
		else if (kierunek == 3)
		{
			pozycja[i][0] = pozycja[i - 1][0] - 1;
			pozycja[i][1] = pozycja[i - 1][1];
		}
		else if (kierunek == 4)
		{
			pozycja[i][0] = pozycja[i - 1][0] + 1;
			pozycja[i][1] = pozycja[i - 1][1];
		}
		else
		{
			cout << "bledny kierunek"<<endl;
			i--;
			continue;
		}
		for (int j = 0;j < i;j++)
		{
			if (pozycja[i][0] == pozycja[j][0] and pozycja[i][1] == pozycja[j][1])
			{
				cout << "waz niepoprawny";
				blad = true;
				break;
			}
		}
		if (blad == true) break;
	}
	if (blad == false) cout << "waz poprawny";

	for (int i = 0;i < n;i++)
	{
		delete[] pozycja[i];
	}
	delete[] pozycja;
}

void odwroc_14(char* s, char* t)
{
	int licznik = 0;
	while (*s != 0)
	{		
		licznik++;
		s++;
		t++;
	}
	s -= licznik;

	for (int i = 0; i < licznik;i++)
	{
		--t;
		*t = *s;
		s++;
	}
}

void wypisz_ctring(char* s)
{
	while (*s != 0)
	{
		cout << *s;
		s++;
	}
	cout << endl;
}

void litery_15(char* litery, char* zdanie)
{
	char* wsklitery;
	int czy_wpisane = 0;

	while (*zdanie != 0)
	{
		wsklitery = litery;
		while (*wsklitery != 0)
		{
			if (*wsklitery >= 'A' and *wsklitery <= 'Z')
			{
				if (*zdanie == *wsklitery + 'a' - 'A')
				{
					czy_wpisane = 1;
					break;
				}
			}
			else if (*wsklitery >= 'a' and *wsklitery <= 'z')
			{
				if (*zdanie == *wsklitery)
				{
					czy_wpisane = 1;
					break;
				}
			}
			wsklitery++;
		}
		if (czy_wpisane == 0)
		{
			if (*zdanie >= 'A' and *zdanie <= 'Z')
			{
				*wsklitery = *zdanie + 'a' - 'A';
			}
			else if (*zdanie >= 'a' and *zdanie <= 'z')
			{
				*wsklitery = *zdanie;
			}
		}
		czy_wpisane = 0;
		zdanie++;
	}
}

bool anagramy_16(char* s, char* t)
{
	int licznik_s = 0;
	int licznik_t = 0;
	char* wsk_s = s;
	char* wsk_t = t;
	while (*wsk_s != 0)
	{
		licznik_s++;
		wsk_s++;
	}
	while (*wsk_t != 0)
	{
		licznik_t++;
		wsk_t++;
	}
	if (licznik_s != licznik_t) return false;

	
	wsk_t = t;

	for (int i = 0;i < licznik_s;i++)
	{
		wsk_s = s;
		for (int j = 0;j < licznik_s;++j)
		{
			
			if (*(wsk_s-1) > *wsk_s)
			{
				char pom = *wsk_s;
				*wsk_s = *(wsk_s - 1);
				*(wsk_s - 1) = pom;
			}
			if(j!=licznik_s)wsk_s++;
		}
	}

	for (int i = 0;i < licznik_t;i++)
	{
		wsk_t = t;
		for (int j = 0;j < licznik_t;++j)
		{

			if (*(wsk_t - 1) > * wsk_t)
			{
				char pom = *wsk_t;
				*wsk_t = *(wsk_t - 1);
				*(wsk_t - 1) = pom;
			}
			if (j != licznik_t)wsk_t++;
		}
	}
	wsk_s = s;
	wsk_t = t;
	while (*wsk_s != 0)
	{
		if (*wsk_s != *wsk_t) return false;
		wsk_s++;
		wsk_t++;
	}
	return true;
}

void permutacje_17(int n)
{





}