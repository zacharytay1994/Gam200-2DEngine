/*
	__FILE HEADER__
	File:	main.cpp
	Author: Gam200
	Date:	21/06/21
	Brief:	Here lies the client testbed initialization
			of the engine. Calls the entry point defined
			in the Engine project. See EntryPoint.h.
*/

#include <Engine.h>

class Sandbox : public Engine::Application
{
public:
	Sandbox()
	{

	}
};

Engine::Application* Engine::CreateApplication()
{
	return new Sandbox();
}