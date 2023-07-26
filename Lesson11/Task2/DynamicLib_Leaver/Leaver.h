#pragma once
#include <iostream>
#ifdef DYNAMICLIBLEAVER_EXPORTS
#define DYNAMICLIBLEAVER_API __declspec(dllexport)
#else
#define DYNAMICLIBLEAVER_API __declspec(dllimport)
#endif
class Leaver
{
public:
	DYNAMICLIBLEAVER_API std::wstring leave(std::wstring);
};