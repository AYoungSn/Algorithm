#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	const int NUM_CARDS = 52;
	vector<int> deck(NUM_CARDS);
	string suits[] = { "Spades","Hearts","Diamonds","Clubs" };
	string ranks[] = { "Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" };
	for (int i = 0; i < NUM_CARDS; i++)
		deck[i]=i;
	srand(time(0));
	for (int i = 0; i < NUM_CARDS; i++){
		int index = rand() % NUM_CARDS;
		int temp = deck[i];
		deck[i] = deck[index];
		deck[index] = temp;
	}
	int i = 0;
	int cnt = 0;
	bool same = false;
	string picks[4];
	while(cnt<4){
		string suit = suits[deck[i] / 13];
		string rank = ranks[deck[i] % 13];
		if (cnt == 0){
			cout << rank << " of " << suit << endl;
			picks[cnt++] = suit;
		}else{
			for (int j = 0; j < 4; j++) {
				if (suit == picks[j]){
					same=true;
					break;
				}
			}
			if (!same){
				picks[cnt++] = suit;
				cout << rank << " of " << suit << endl;
			}
		}
		same = false;
		i++;
	}
	cout << "Number of picks: " << i<<endl;

	system("pause");
	return 0;
}