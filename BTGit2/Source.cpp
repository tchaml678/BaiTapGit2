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
	case 1:// bai 
		
		
	case 2:
		
	case 3:
		
	case 4:// Long...		
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