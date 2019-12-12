#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	cout << "введите размер ключа  "<< endl;
	cin>>size;
	cout << "Введите ключ  "<< endl;
	int *key = new int [size];
	int *_key = new int [size];
	for (int k=0;k<size;k++)
	{
		cin>>key[k];
		_key[key[k]]= k;
						   
	}					  
	int m=size; //колво столбцов
	string ptr;
	cout<<"Введите текст , который вы хотите зашифровать/дешифровать\n";
	cin>>ptr;
	while (ptr.length()%size!=0)
	{
	  ptr+='_';
	}
	int n = ptr.length()/size;
	cout<<"E or D"<<endl;
	char eod;
	cin>>eod;
	ofstream fout_e;
	fout_e.open("en.txt");
	ofstream fout_d;
	fout_d.open("de.txt");
	while(1)
	{
		switch (toupper(eod))
		{
		case 'E':
			cout <<"ИСХОДНЫЙ КОД"<<endl;
	for (int i=0;i<n;i++) //i индекс строки
	{
	for (int j=0;j<m;j++) //j индекс столбца 
	cout<<ptr[j*n+i]<<' ';
	cout<<endl;
	}
	cout <<"ЗАШИФРОВАННЫЙ КОД" <<endl;
	for (int i=0;i<n;i++) 
	{
	for (int j=0;j<m;j++) // 
	cout<<ptr[key[j]*n+i]<<' ';
	cout<<endl;
	}
	cout <<endl;
	
	for (int i=0;i<n;i++)
	{
	
	for (int j=0;j<m;j++)
	{
	
	cout<<ptr[key[j]*n+i];
	fout_e<<ptr[key[j]*n+i];

	}
	}
	        
			break;
		case 'D':
			for (int j=0;j<m;j++) 
	{
	
	for (int i=0;i<n;i++)
	{
		cout<<ptr[_key[j]+i*m];
		fout_d<<ptr[_key[j]+i*m];
		
	}
	
			
		}
     
		break;
		default:
        
			break;
	}
   
	break;
	

	
	

	}
}

