#include <io.h>
#include <fcntl.h>
#include <Leaver.h>

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

    Leaver l;
    std::wstring name;

    std::wcout << L"Введите имя: ";
    std::wcin >> name;
    std::wcout << l.leave(name) << "\n";
}