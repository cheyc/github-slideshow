/*#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int w[105];   // ≤Â»Î≈≈–Ú
int cnt;      // ≤Â»Î≈≈–Ú
void xzps(int *a, int n) {              // —°‘Ò≈≈–Ú
	int c, min, i;
	for (c = 0; c < n; c++) {
		for (min = c, i = c; i < n; i++) {
			if (a[i] < a[min]) {
				min = i;
			}
		}
		swap(a[min], a[c]);
	}
}

void mppx(int* a, int n) {              // √∞≈›≈≈–Ú   
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d", a[i]);
	}
}

void crpx(int *a) {             // ≤Â»Î≈≈–Ú
	int p;
	for (p = 0; p < cnt; p++) {
		if (w[p] > a[p]) {
			break;
		}
		for (int i = cnt; i > p; i--) {
			w[i] = w[i - 1];
		}
		w[p] = a[p];
		cnt++;
	}
}
int main() {




	return 0;
}*/
// *********************************************************************
// ≤Â»Î≈≈–Ú
/*#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[105];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j >= 1; j--) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
			else {
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}



	return 0;
}*/
// *******************************************************************
//  √∞≈›≈≈–Ú
/*#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[105];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j - 1]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}


	return 0;
}*/
// ******************************************************************8
// —°‘Ò≈≈–Ú
/*#include <iostream>
#include <algorithm>
using namespace std;
int a[105];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int d, p, min;
	for (d = 0; d < n; d++) {
		for (min = d, p = d; p < n; p++) {
			if (a[p] < a[min]) {
				min = p;
			}
		}
		swap(a[min], a[d]);
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}


	return 0;
}*/
// ********************************************************************
// πÈ≤¢≈≈–Ú
/*#include <iostream>
#include <algorithm>
using namespace std;
int a[100005];
int b[100005];
void merge(int l , int r) {
	int p1 = l, mid = (l + r) / 2, p2 = mid + 1, p = l;
	while (p1 <= mid && p2 <= r) {
		if (a[p1] <= a[p2]) {
			b[p++] = a[p1++];
		}
		else {
			b[p++] = a[p2++];
		}
	}
	while (p1 <= mid) {
		b[p++] = a[p1++];
	}
	while (p2 <= r) {
		b[p++] = a[p2++];
	}
	for (int i = l; i <= r; i++) {
		a[i] = b[i];
	}
}
void mergesort(int r, int l) {
	if (l == r) {
		return;
	}
	int mid = (l + r) / 2;
	mergesort(l, mid);
	mergesort(mid + 1, r);
	merge(l, r);
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	mergesort(0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
		return 0;
	}
}*/
//***************************************************************************
// øÏÀŸ≈≈–Ú
/*#include <iostream>
#include <cstdlib>
using namespace std;
int a[100005];
int b[100005];
int getRand(int l, int r) {
	return rand() % (r - l + 1) + l;
}
void quicksort(int l, int r) {
	if (l >= r) {
		return;
	}
	int flag = a[getRand(l, r)];
	int p1 = l, p2 = r;
	for (int i = l; i <= r; i++) {
		if (a[i] < flag)b[p1++] = a[i];
		if (a[i] > flag)b[p2--] = a[i];
	}
	for (int i = l; i < p1; i++) {
		a[i] = b[i];
	}
	for (int i = r; i > p2; i--) {
		a[i] = b[i];
	}
	for (int i = p1; i <= p2; i++) {
		a[i] = flag;
	}
	quicksort(l, p1 - 1);
	quicksort(p2 + 1, r);
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	quicksort(0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}*/
//***********************************************************************************
