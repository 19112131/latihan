#include <iostream>
#include <conio.h>

using namespace std;

int insert(int nilai[], int n){
	int i, j, k, temp;
	for (i=0; i<n; i++){
     for (j=0; j<i; j++){
         if( nilai[i] < nilai[j] ){
            temp = nilai[i];
             nilai[i] = nilai[j];
             nilai[j] = temp;
			 }
       }
       cout <<"\n Proses Ke-"<< i+1 <<" : ";
       for (k=0; k < n; k++){
         cout << "  " << nilai[k];
       } cout << endl;
    } cout << endl;
    cout<<"Data sudah terurut : \n";
		for(i=0; i<6; i++){
		cout << "  " << nilai[i];
		}
		cout << endl << endl;
}

int max(int nilai[], int n){
	int posisi, temp;
	for (int i=0; i<n-1; ++i){
    posisi = i;
    for (int j=i+1; j<n; ++j){
      if (nilai[j] < nilai[posisi]){
          posisi = j;   
      }
    }
    if (posisi!=i){
         temp = nilai[posisi];
      nilai[posisi] = nilai[i];
      nilai[i] = temp;
     }
    cout << "Proses Ke-" << i+1 << " : ";
    for (int x = 0; x < n; ++x){
     cout << nilai[x] << " ";
    }cout<<endl;
  }cout << endl;
    cout << "Data sudah Terurut : ";
  for (int i=0; i<n; ++i){
    cout << nilai[i] << " ";
   } 
}

int bubble(int nilai[], int n){
	int temp;
	for (int i = 0; i < n-1; i++)
    {
    for (int j = i+1; j < n; j++)
    {
        if (nilai[i]>nilai[j])
        {
            temp = nilai[i];
            nilai[i]=nilai[j];
            nilai[j]=temp;
        }
    }
    }
}

void keluar(){
	cout << "====================================" << endl;
    cout << "============TERIMA KASIH============" << endl;
    cout << "======= SAMPAI JUMPA KEMBALI =======" << endl;
    cout << "====================================" << endl;
};

int main() {
	int pilih; int i, nilai[6];
	cout << "============ PROGRAM ARRAY SORTING ============\n";
menu:
	cout << "=== MENU SORTING ===\n";
	cout << "1. Isi ARRAY\n";
	cout << "2. INSERTION SORT\n";
	cout << "3. MAXIMUM SORT\n";
	cout << "4. BUBBLE SORT\n";
	cout << "5. KELUAR DARI PROGRAM\n";
	cout << "Masukan Pilihan Anda: ";
	cin >> pilih;
	cout << endl;
	
	switch(pilih){
	case 1:
		//loop input
		int nilai2[6];
		cout << "== Mengisi 6 Data Integer ==\n";
		for(i=0; i < 6; i++){
		cout << "Masukkan nilai ke-" << i+1 << ": ";
		cin >> nilai[i];
		nilai2[i]=nilai[i];
		}
		cout << endl;
		//loop tampilan
		cout << "Isi data array :" << endl;
		for (i=0; i < 6; i++) {
		cout << nilai[i] << " ";
		} cout << endl;
		cout << endl;
		goto menu;
		break;
			
	case 2: //insert
		system("cls");
		cout << "=== INSERTION SORT ===\n";
		cout<<"Data belum terurut : \n";
		for (i = 0; i < 6; i++){
			cout<<nilai[i]<<" ";
		}cout<<endl;
		insert(nilai,6);
		goto menu;
		break;
			
	case 3: //max
		system("cls");
		cout << "=== MAXIMUM SORT ===\n";
		cout<<"Data belum terurut : \n";
		for (i = 0; i < 6; i++){
			cout<<nilai[i]<<" ";
		}cout<<endl;
		max(nilai,6);
		cout << endl;
		goto menu;
		break;
			
	case 4://bubble
		system("cls");
		cout << "=== BUBBLE SORT ===\n";
		cout<<"Data belum terurut : \n";
		for (i = 0; i < 6; i++){
			cout<<nilai[i]<<" ";
		}cout<<endl;
		bubble(nilai,6);
		cout<<"Data sudah terurut : \n";
		for (i = 0; i < 6; i++){
		cout<<nilai[i]<<" ";
		}cout<<endl;
		cout << endl;
		goto menu;
		break;
		
	case 5: //kluar:)
		system("cls");
		keluar();
	}
}
