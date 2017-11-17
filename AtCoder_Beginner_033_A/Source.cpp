/*
問題文
あなたはゲーム開発メンバーの一員です。 現在、あなたはプレイヤーがゲームをプレイするために必要な暗証番号を決めさせる部分を実装しています。
この暗証番号は 4 桁 であり、それぞれの桁は 0 以上 9 以下の数字のいずれかです。暗証番号が 0 で始まる可能性もあります。
安全上の関係で、 4 桁とも同じ数字である暗証番号は認めないことにしました。プレイヤーが入力した 4 桁の数 N が与えられるので、 これが 4 桁とも全て同じ数字であるかどうかを判定してください。
*/

#include<iostream>
#include<algorithm>
#include<vector>


const int digit=4;

int main() {
	int num;
	std::vector<int> storage;
	std::cin >> num;

	for (int i = digit; i >= 0; i--) {
		storage.push_back(num % 10);
		num /= 10;
	}
	if((digit==std::count(storage.begin(), storage.end(), storage[0]))||( digit+1 == std::count(storage.begin(), storage.end(), storage[0]))){
		std::cout << "SAME"<<std::endl;
	}
	else {
		std::cout << "DIFFERENT"<<std::endl;
	}

	//まとめ　0000のとき配列のヌル文字が入るので00000で0が５つカウントされており1つ目のif条件だけでは足りなかった

	/*
	std::cout << "\nstorageの中身" << std::endl;
	for (int j = 0; j <= 4; j++) {
		std::cout << storage[j];
	}
	std::cout << "\n何故5桁？\n" << std::endl;
	*/

	return 0;
}