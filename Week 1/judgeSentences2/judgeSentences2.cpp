// judgeSentences2.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

void lake(){
	int py, dt, t, hz;
	bool a, b, c, d;
	for (py = 1; py <= 4;py++)
		for (dt = 1; dt <= 4; dt++)
			for (t = 1; t <= 4; t++)
			for (hz = 1; hz <= 4; hz++){
				if ((py - dt)*(py - t)*(py - hz)*(dt - t)*(dt - hz)*(t - hz) != 0){
					a = ((py == 3) + (dt == 1) + (hz == 4)) == 1;
					b = ((py == 2) + (dt == 4) + (t == 3) + (hz == 1)) == 1;
					c = ((dt == 3) + (hz == 4)) == 1;
					d = ((py == 1) + (dt == 3) + (t == 4) + (hz == 2)) == 1;

					if (a*b*c*d == 1){
						cout << py << endl;
						cout << dt << endl;
						cout << t << endl;
						cout << hz << endl;
					}
				}
			}
}

int main()
{
	lake();
	return 0;
}

