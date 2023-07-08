#pragma once

class Counter {
	int count;

public:
	Counter();
	Counter(int n);

	void increase();
	void decrease();

	void status();
};