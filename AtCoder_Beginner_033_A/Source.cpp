/*
��蕶
���Ȃ��̓Q�[���J�������o�[�̈���ł��B ���݁A���Ȃ��̓v���C���[���Q�[�����v���C���邽�߂ɕK�v�ȈÏؔԍ������߂����镔�����������Ă��܂��B
���̈Ïؔԍ��� 4 �� �ł���A���ꂼ��̌��� 0 �ȏ� 9 �ȉ��̐����̂����ꂩ�ł��B�Ïؔԍ��� 0 �Ŏn�܂�\��������܂��B
���S��̊֌W�ŁA 4 ���Ƃ����������ł���Ïؔԍ��͔F�߂Ȃ����Ƃɂ��܂����B�v���C���[�����͂��� 4 ���̐� N ���^������̂ŁA ���ꂪ 4 ���Ƃ��S�ē��������ł��邩�ǂ����𔻒肵�Ă��������B
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

	//�܂Ƃ߁@0000�̂Ƃ��z��̃k������������̂�00000��0���T�J�E���g����Ă���1�ڂ�if���������ł͑���Ȃ�����

	/*
	std::cout << "\nstorage�̒��g" << std::endl;
	for (int j = 0; j <= 4; j++) {
		std::cout << storage[j];
	}
	std::cout << "\n����5���H\n" << std::endl;
	*/

	return 0;
}