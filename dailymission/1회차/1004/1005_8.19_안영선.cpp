#include <iostream>
using namespace std;

const int H = 100;

int main()
{
	int n, limit;	
	cin >> n >> limit;//은행의 수, 최소자산 입력

	double loan[H][H] = { 0 };//i은행이j은행으로 대여해 준 것
	//bool borrowers[H][1] = { 0 };//col index:은행아이디, col:안전상태
	//double balance[H] = { 0 }; 은행 현재 잔액
	double totalBalance[H] = { 0 };//은행 총 잔액
	int borcnt = 0;//빌려준 은행 수

	cout << "은행 정보\n";
	double bor;//은행에게 빌려준 금액
	int id;//돈을 빌려간 은행의 아이디 입력받을 변수
	for (int i = 0; i < n; i++) {
		cin >> totalBalance[i] >> borcnt;//총잔액에 현재잔액 먼저 입력받기
		for (int j = 0; j < borcnt; j++){	
			cin >> id >> bor;
			loan[i][id] = bor;//i은행이 id은행에게 빌려준 금액bor
			totalBalance[i] += loan[i][id];//현재잔액에서 빌려준 돈을 모두 더한 총 잔액
		}
		//위험한 은행을 찾아서 총 잔액 변경
		if (totalBalance[i] < limit) {//i은행의 총 잔액이 limit값보다 작으면
			for (int j = 0; j < n; j++) {
				totalBalance[j] -= loan[j][i];//j은행의 총 잔액에서 i은행에게 빌려준 금액 못받으므로 총잔액에서 뺌
				loan[j][i] = 0;//j은행이 i은행에게 빌려준 금액 받을 수 없으므로 0
			}
		}
	}
	//위험한 은행 최종
	cout << endl << "Unsafe banks are ";
	for (int i = 0; i < n; i++) {
		if (totalBalance[i]<limit)//총 잔액이 limit보다 작은 은행
			cout << i<<" ";
	}
	system("pause");
	return 0;
}

