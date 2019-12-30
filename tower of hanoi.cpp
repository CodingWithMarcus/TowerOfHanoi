#include <iostream>

using namespace std;

class hanoi {

public:
	char disk[1];
	char *pointer;
	
	

	void tower(int Discs, char begin, char end, char via);
};



int main() {

	hanoi run;

	int disks = 0;
	cout << "Please enter your number of disks to use (3-18): ";
	cin >> disks;


	cout << endl;

	run.tower(disks, 'A', 'B', 'C');


	

	system("Pause");
	return 0;
}



void hanoi:: tower(int Discs, char begin, char end, char via) {


	for (int i = 0; i < 1; i++) {
		disk[i] = Discs;
		pointer = disk;

	}

	

	 if (Discs == 1)
	{
		cout << "(" << "from " << begin << " to " << end << ") ";

		
	}


	else
	{
		tower(Discs - 1, begin, via, end);
		tower(1, begin, end, via);
		tower(Discs - 1, via, end, begin);
	}


}
