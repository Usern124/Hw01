#include <iostream>
#include "class_counter.h"

Counter::Counter() { count = 1; }
Counter::Counter(int n) { count = n; }
void Counter::increase() { ++count; }
void Counter::decrease() { --count; }
void Counter::status() { std::cout << count << '\n'; }
