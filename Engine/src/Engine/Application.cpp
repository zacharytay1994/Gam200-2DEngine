/*	__FILE HEADER__
*	File:	Application.cpp
	Author: JZ
	Date:	19/06/21
	Brief:	Defines an application class that runs the engine editor.
			See Application.h for more information on the class.	
*/

#include "PrecompiledHeaders.h"
#include "Application.h"

#include <iostream>

namespace Engine
{
	Application::Application()
	{

	}

	void Application::Run()
	{
		std::cout << "ENGINE UP AND RUNNING!" << std::endl;
		while (true)
		{
		}
	}
}
