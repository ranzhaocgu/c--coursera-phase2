// findSubscript.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int findSubscrip(int data[], int n){
	for (int i = 0; i < n; i++){
		if (data[i] == i){
			return i;
		}
	}

	return -1;
}

int main()
{
	int n, data[100], output;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> data[i];
	}

	output = findSubscrip(data, n);
	if (output == -1){
		cout << "N" << endl;
	}
	else
	{
		cout << output << endl;
	}
	return 0;
}

