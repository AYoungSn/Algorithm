#include <iostream>
using namespace std;

const int H = 100;

int main()
{
	int n, limit;	
	cin >> n >> limit;//������ ��, �ּ��ڻ� �Է�

	double loan[H][H] = { 0 };//i������j�������� �뿩�� �� ��
	//bool borrowers[H][1] = { 0 };//col index:������̵�, col:��������
	//double balance[H] = { 0 }; ���� ���� �ܾ�
	double totalBalance[H] = { 0 };//���� �� �ܾ�
	int borcnt = 0;//������ ���� ��

	cout << "���� ����\n";
	double bor;//���࿡�� ������ �ݾ�
	int id;//���� ������ ������ ���̵� �Է¹��� ����
	for (int i = 0; i < n; i++) {
		cin >> totalBalance[i] >> borcnt;//���ܾ׿� �����ܾ� ���� �Է¹ޱ�
		for (int j = 0; j < borcnt; j++){	
			cin >> id >> bor;
			loan[i][id] = bor;//i������ id���࿡�� ������ �ݾ�bor
			totalBalance[i] += loan[i][id];//�����ܾ׿��� ������ ���� ��� ���� �� �ܾ�
		}
		//������ ������ ã�Ƽ� �� �ܾ� ����
		if (totalBalance[i] < limit) {//i������ �� �ܾ��� limit������ ������
			for (int j = 0; j < n; j++) {
				totalBalance[j] -= loan[j][i];//j������ �� �ܾ׿��� i���࿡�� ������ �ݾ� �������Ƿ� ���ܾ׿��� ��
				loan[j][i] = 0;//j������ i���࿡�� ������ �ݾ� ���� �� �����Ƿ� 0
			}
		}
	}
	//������ ���� ����
	cout << endl << "Unsafe banks are ";
	for (int i = 0; i < n; i++) {
		if (totalBalance[i]<limit)//�� �ܾ��� limit���� ���� ����
			cout << i<<" ";
	}
	system("pause");
	return 0;
}

