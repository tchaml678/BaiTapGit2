#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int baiTap2;
	cout << "Nhap lua chon: ";
	cin >> baiTap2;

	switch (baiTap2)
	{
	case 1:
	//bai 1	
		
	case 2:
	 int a,b;
    cout << "-----------Tinh DT HCN----------\n";
    cout << "nhap vao 2 canh a, b: " ;
    cin >> a>>b;
    cout << "Dien tich hcn : " << a*b;
 
    cout << "\n-----------Tinh DT HV----------\n";
    cout << "nhap vao 2 canh a = " ;
    cin >> a;
    cout << "Dien tich hinh vuong : " << a*a;
 
    cout << "\n-----------Tinh DT HT----------\n";
    float r;
    cout << "nhap vao ban kinh r = " ;
    cin >> r;
    cout << "dien tic hinh tron la : " << r*r*pi;
	case 3:
	//bai 3
	case 4:// Bai 4		
		int a;
		a = rand() % (100) + 1;
		int b;
		b = rand() % (100) + 1;
		cout <<a<<" - "<<b<<" = "<< a - b;

		break;

	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
	
}