/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : Pretest-03 Kasus 1
Tahun           : 2019
*/

#include <iostream>
#include <string>
using namespace std;

struct r_mhs
{
	char npm[14];
	char nama[40];
	float ipk;
};
typedef r_mhs larikMhs[30];

void banyakData(int& n)
{
	cout << "Banyak mahasiswa: "; cin >> n;
}

void inputMhs(larikMhs& mhs, int n)
{
	for (int i=0; i<n; i++)
	{
		cout << "NPM: "; cin >> mhs.npm[i];
		cout << "Nama: "; cin >> mhs.nama[i];
		cout << "IPK: "; cin >> mhs.ipk[i];
	}
}

void cetakMhs(larikMhs& mhs, int n)
{
		for (int i=0; i<n; i++)
	{
		cout << i+1 << ". ";
		cout << mhs.npm[i] << " ";
		cout << mhs.nama[i] << " ";
		cout << mhs.ipk[i] << endl;
	}
}

void sortingNama(larikMhs& mhs, int n)
{
	int temp=0;
	for (int i=0; i<n; i++)
	{
		if (nama[i]>nama[i+1])
		{
			m
		}
	}	
}

int main(int argc, char** argv)
{
	int n;
	larikMhs mhs;
	
	banyakData(n);
	inputMhs(mhs,n);
//	sortNama(mhs,n);
	cetakMhs(mhs,n);
	return 0;
}
