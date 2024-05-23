// Bài tập tổng hợp 13.1
// MSSV: 20233665
// Họ tên: Phan Văn Thuận
#include <iostream>
using namespace std;

int main() {

	/********** 13.1.01. **********
    int n, GiaiThua = 1;
    cout << "Nhap n vao:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        GiaiThua *= i;
    }
    cout << n << " != " << GiaiThua << endl;

	/********** 13.1.02. **********
	int x;
	float n, result = 1.0;

	cout << "Nhap x vao: ";
	cin >> x;
	cout << "Nhap n vao: ";
	cin >> n;

	result = pow (x,n);
    
    cout << "Ket qua cua x^n la: " << result << endl;
    
	/********** 13.1.03. **********
	int n;
	float sum = 1.0;

	cout << "Nhap n vao: ";
	cin >> n;

	for (int i =1; i <= n; i++) {
		sum += 1.0/(2*i);
	}
	cout << "Tong la: " << sum << endl;
	
	/********** 13.1.04. **********
	int x, dem = 0;
	cout << ("Nhap x vao: ");
	cin >> x;
	for (int i = 1; i <= x; i++) {
		if (x%i == 0) dem++;
	}
	cout << x << (dem != 2 ? " khong ": " ") << "la so nguyen to";
	
	/********** 13.1.05. **********
	int n, k;
	int Gn = 1, Gk = 1, Gnk = 1;
	cout << " Nhap gia tri cua n: \n"; cin >> n;
	cout << " nhap gia tri cua k: \n"; cin >> k;

	for ( int i = 2; i <= n; i++) {
		Gn *= i;
		if ( i == k ) Gk = Gn;
		if ( i == n - k ) Gnk = Gn;
	}
	cout << "Ket qua cua to hop chap k la: " << Gn / ( Gk * Gnk) ;
	
	/********** 13.1.06. **********
	int x;
	int n = 8;
	cout << "Nhap x vao: "; cin >> x;
	int a = 1 << n;

	while (a >>= 1) {
		cout << (x & a ? '1' : '0');
	}

	/********** 13.1.07. **********
	int max, min;
	int count = 0;
	cout << "Nhap so vao: ";
	while (true) {
		int a;
		cin >> a;
		if (a == 0) break;
		if (count == 0) {
			min = max = a;
		} else {
		if (a > max) {
			max = a;
		}
		if ((a < min) && (a != 0)) {
			min = a;
		}
		count++;
		}
	}
	cout << " So lon nhat la: " << max << endl << "So be nhat la: " << min;

	/********** 13.1.08. **********
	int d1, d2, d8;
	d1 = d2 = d8 = 0;

	cout << "Nhap so vao: ";
	while (true) {
		int a;
		cin >> a;
		if (a == 0) break;
		if (a % 2 == 0) {
			++d2;
			if (a % 8 == 0) ++d8;
		} else {
			++d1;
		}
	}
	cout << "So so chan la: " << d1 << endl << "So so le la: " << d2 << endl << "So so chia het cho 8 la: " << d8;
	/********** 13.1.09. **********
	int n;
	int dem = 0;
	int f1 = 0, f2 = 1, f;

	cout << "Nhap n vao: ";
	cin >> n;
	cout << f2 << " ";

	while ( dem <= n - 2 ) {
		f = f1 + f2;
		cout << f << " ";
		f1 = f2;
		f2 = f;
		dem++;
	}
	/********** 13.1.10. **********
	int n;
	int dem = 0;
	int f1 = 0, f2 = 1, f;

	cout << "Nhap n vao: ";
	cin >> n;

	while (( f = f1 + f2 ) < n) {
		f1 = f2;
		f2 = f;
	}
	cout << n << ( n == f ? " ": " khong ") << "nam trong day Fibonacci \n";
	/********** 13.1.11. **********
		int n;
		cout << "Nhap n vao: ";
		cin >> n;

		double x = n / 2.0 ; // x là gia tri du doan hien tai
		double y; // gia tri du doan truoc do

		do {
			y = x;
			x = ( x + n / x) / 2;
		} while (fabs( x - y ) >= 1E-8);

		cout << "Can bac hai cua so " << n << " la " << x << endl;
	/********** 13.1.12. **********
	int a, b, c, d;
  cout << "Nhap 4 so nguyen co 1 chu so: ";
  cin >> a >> b >> c >> d;

  int num = a * 1000 + b * 100 + c * 10 + d;

  if (num < 0 || num > 9999) {
    cout << "So nguyen tao thanh khong hop le! " << endl;
    return 1;
  }
  double sqrtNum = sqrt(num);

  cout << "Can bac hai cua so " << num << " la: " << sqrtNum << endl;
	
	/********** 13.1.13. **********
	int m, n;
	cout << " So hang la: \n"; cin >> m;
	cout << " So cot la: \n"; cin >> n;

	for ( int i = 0, k = 0; i <= (m - 1); i++) {
		for ( int j = 0; j <= (n - 1); j++) {
			cout << ++k << '\t';
		} cout << endl;
	}

	/********** 13.1.14. **********
	double a, b, c;
	cout << " Nhap a, b, c vao: \n";
	cin >> a >> b >> c;
	int can = ( a == b ) || ( b == c ) || ( c == a );
	int vuong = ( a == c + b ) || ( c == a + b );

	cout << "Tam giac";
	if (vuong) {
		cout << " vuong";
		if (can) cout << " can";
	} else if (can) {
		cout << (( a == b ) && ( b == c ) && ( c == a ))? " deu": " can";
	} else cout << " thuong ";

	/********** 13.1.15. **********/
	cout << "Cac chu cai in hoa:\n";
    for(int i = 65;i <= 90;i++) cout << char (i) << "(" << i << ")" << " "; cout << endl;
	cout << "Cac chu cai in thuong:\n";
    for(int i = 97;i <= 122;i++) cout << char (i) << "(" << i << ")" << " ";  cout << endl;
	cout << "Cac chu so:\n";
	for(int i = 48;i <= 57;i++) cout << char (i) << "(" << i << ")" << " ";
	/******************************/
	return 0;
}