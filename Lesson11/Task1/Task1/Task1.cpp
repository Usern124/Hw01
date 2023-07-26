#include <io.h>
#include <fcntl.h>
#include <Greeter.h>

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

    Greeter g;
    std::wstring name;

    std::wcout << L"Введите имя: ";
    std::wcin >> name;
    std::wcout << g.greet(name) << "\n";
}