#include <iostream>
#include <fstream>
#include <sys/time.h>
#include <cmath>
#include <ctime>

using namespace std;

int absolute(int x)
{
	if(x < 0)
		return -x;
	return x;	
}

int main(int argc, char** argv) {

	time_t timestamp;

	string filename1, filename2;
	fstream file1, file2;
	fstream log;
	log.open("log.txt", ios::out|ios::app);

	string var1, var2;
	//XOR var to compare XOR between elements (difference)
	char XOR;
	//Counter - how many bits differ
	int counter = 0;
	//Amount - how many bits are compared
	long amount = 0;

