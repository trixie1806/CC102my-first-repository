#include <iostream>

using namespace std;

int main ()
{
	int temperature;
	
	cout << "What is the Temperature outside? ";
	cin >> temperature;
	
	if (temperature < 32) {
		cout << "Bring a heavy jacket";
	} 
	else if (temperature == 32 || temperature <= 50) {
		cout << "Bring a light jacket";
	} 
	else if (temperature > 50)  {
		cout << "Donnot bring jacket at all";
	} 
	
	return 0;
}