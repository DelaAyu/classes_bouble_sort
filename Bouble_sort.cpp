#include <stdio.h>
#include <iostream>
using namespace std;


class Bouble_sort {
	public : int data, jumlahdata;
	tukar(int data[], int jumlahdata){
		int j, tamp;
		for(int i=0; i<=jumlahdata; i++)
		{
		  for(j=0; j<=jumlahdata; j++)
		  {
			  if(data[j]>data[j+1])
			  {
					tamp=data[j];
					data[j]=data[j+1];
					data[j+1]=tamp;
					
			  }
		  }
		}
		
		cout << endl << " =====================================" << endl << endl;
		cout <<" Hasil data setelah di sorting :" << endl;
		for(int i=0; i<=jumlahdata; i++)
		{
			cout << " [" << data[i] << "]";
		}
		cout<<endl<<endl<<endl;
	}
};


int main(int argc,char **argv)
{
  int jumlahdata = 5; 		
  int data[5];				
  
  cout << " Bouble sort untuk mengurutkan enam (6) derat angka : " << endl;
  cout << endl << " =====================================" << endl << endl;

  cout << " Masukkan data ke 1 = "; 		
  cin >> data[0];							
  cout << " Masukkan data ke 2 = ";			
  cin >> data[1];							
  cout << " Masukkan data ke 3 = ";			
  cin >> data[2];							
  cout << " Masukkan data ke 4 = ";			
  cin >> data[3];  							
  cout << " Masukkan data ke 5 = ";			
  cin >> data[4];							
  cout << " Masukkan data ke 6 = ";			
  cin >> data[5];							
  
  cout << endl << " =====================================" << endl << endl;
  cout << " Hasil data yang di input :" << endl;
  
 
  for(int a = 0; a <= 5; a ++)
  {
	 cout << " [" << data[a] << "]" ;
  }
  cout << endl;
  
  
  int parsingdata[] = {data[0], data[1], data[2], data[3], data[4], data[5]};
  

  Bouble_sort obj;
  obj.tukar(parsingdata, jumlahdata);  
}
