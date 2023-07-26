#include "Greeter.h"
std::wstring Greeter::greet(std::wstring name) {
	return L"Здравствуйте, " + name + L'!';
}