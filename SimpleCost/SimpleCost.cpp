﻿#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<float> prices{ 2.5, 4.25, 3.0, 10.0 };
	vector<int> items{ 1, 1, 0, 3 };
	float sum = 0.0;
	for (int i = 0; i < items.size(); i++) {
		sum += prices[items[i]];
	}
	cout << "Total cost will be: " << sum;


}