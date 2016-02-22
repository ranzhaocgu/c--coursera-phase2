// judgeSentences.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

bool check_A(int[4]);
bool check_B(int[4]);
bool check_C(int[4]);
bool check_D(int[4]);

int main()
{
	int check_a, check_b, check_c, check_d;
	int right_answer[4];

	int order[4] = { 1, 2, 3, 4 };
	check_a = check_A(order);
	check_b = check_B(order);
	check_c = check_C(order);
	check_d = check_D(order);

	if (check_a && check_b && check_c && check_d){
		for (int x = 0; x < 4; x++){
			cout << order[x] << endl;
		}
	}

	for (int i = 0; i < 3; i++){
		for (int j = i + 1; j < 4; j++){
			int order[4] = { 1, 2, 3, 4 };
			int temp;
			temp = order[j];
			order[j] = order[i];
			order[i] = temp;
			check_a = check_A(order);
			check_b = check_B(order);
			check_c = check_C(order);
			check_d = check_D(order);

			if (check_a && check_b && check_c && check_d){
				for (int x=0; x < 4; x++){
					cout << order[x] << endl;
				}
			}
		}
	}
	return 0;
}


bool check_A(int arr[4]){
	bool outcome = 0;

	int count = 0;
	if (arr[1] == 1){
		count++;
	}
	else if (arr[3] == 4){
		count++;
	}
	else if (arr[0] == 3){
		count++;
	}

	if (count == 1){
		outcome = 1;
	}

	return outcome;
}

bool check_B(int arr[4]){
	bool outcome = 0;

	int count = 0;
	if (arr[3] == 1){
		count++;
	}
	else if (arr[1] == 4){
		count++;
	}
	else if (arr[0] == 2){
		count++;
	}
	else if (arr[2] == 3){
		count++;
	}

	if (count == 1){
		outcome = 1;
	}

	return outcome;
}

bool check_C(int arr[4]){
	bool outcome = 0;

	int count = 0;
	if (arr[1] == 3){
		count++;
	}
	else if (arr[3] == 4){
		count++;
	}

	if (count == 1){
		outcome = 1;
	}

	return outcome;
}

bool check_D(int arr[4]){
	bool outcome = 0;

	int count = 0;
	if (arr[0] == 1){
		count++;
	}
	else if (arr[2] == 4){
		count++;
	}
	else if (arr[3] == 2){
		count++;
	}
	else if (arr[1] == 3){
		count++;
	}

	if (count == 1){
		outcome = 1;
	}

	return outcome;
}