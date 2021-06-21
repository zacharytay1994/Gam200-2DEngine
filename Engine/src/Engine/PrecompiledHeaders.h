/*
	__FILE HEADER__
	File:	PrecompiledHeader.h
	Author: Gam200
	Date:	21/06/21
	Brief:	Here lies all the headers that want to be precompiled.
			In order to on compilation save time, include std library headers
			that are used often here. All .cpp files require this header
			to be included.
*/

#pragma once

// containers
#include <string>
#include <array>
#include <vector>

// streams
#include <fstream>
#include <sstream>
#include <iostream>