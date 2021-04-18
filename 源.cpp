#include<iostream>
using namespace std;
static int x = 1;
int mi;
int ni;
void cinl() {
	cin >> mi >> ni;
}
const int mx = mi;
const int nx = ni;
class a
{public:
	int ai[4][5];
public:
	void luoxuan() {
		int quan, i = 0, j = 0, m;
		quan = 5 / 2 + 5 % 2;
		for (m = 0; m < quan; m++) {
			for (i = m, j = m; j < (5 - m); j++)
			{
				ai[i][j] = x++;
			}
			for (j--, i++; i < (4 - m); i++)
			{
				ai[i][j] = x++;
			}
			for (j--, i--; j >= m; j--)
			{
				ai[i][j] = x++;
			}
			for (i--, j++; i > m; i--)
			{
				ai[i][j] = x++;
			}
		}
	}
	void coutl() {
		int i, j;
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 5; j++) {
				if (ai[i][j] < 10) cout << " ";
				cout << ai[i][j] << " ";
			}
			cout << endl;
		}
	}
	void ccxz() {
		int h, y;
		cin >> h >> y;
		cout << ai[h-1][y-1];
	}
};

int main() {
	a a1;
	a1.luoxuan();
	a1.coutl();
	a1.ccxz();
	return 0;
}