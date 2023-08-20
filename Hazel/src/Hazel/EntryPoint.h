#pragma once

#ifdef HZ_PLATFORM_WINDOWS

//********************************|
//====ReggiesPreemptiveInclude====|
//********************************|
#include <iostream>
#include <sstream>
#include <string>
#include <memory>
#include <vector>
#include <chrono>
#include <cstdlib>

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app; 
}
#endif
