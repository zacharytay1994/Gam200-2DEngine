/*	__FILE HEADER__
*	File:	EntryPoint.h
	Author: Gam200
	Date:	19/06/21
	Brief:	Defines the entry point if the current project
			has preprocessor definition JZENGINE_PLATFORM_WINDOWS defined.	
*/

#pragma once

#include "Application.h"

#ifdef ENGINE_PLATFORM_WINDOWS
	extern Engine::Application* Engine::CreateApplication();

	/*!
	 * @brief main
	 * Entry point defined in the engine, for client applications to call.
	*/
	int main(int argc, char** argv)
	{
		auto app = Engine::CreateApplication();
		app->Run();
		delete app;
	}
#endif // !ENGINE_PLATFORM_WINDOWS
