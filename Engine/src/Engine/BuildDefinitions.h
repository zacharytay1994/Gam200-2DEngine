/*	__FILE HEADER__
*	File:	BuildDefinitions.h
*	Author: Gam200
*	Date:	19/06/21
*	Brief:	Defines some stuff to shorten the dllexport and import
*			syntax on the engine and client's side.
*/

#pragma once

/*	ENGINE_PLATFORM_WINDOWS preprocessor definition included in both 
	engine project and client project	*/
#ifdef ENGINE_PLATFORM_WINDOWS
/*	ENGINE_BUILD_DLL preprocessor definition included only in engine
	project */
	#ifdef ENGINE_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)	/*!< needed for exporting engine implementation to the client application */
	#else
		#define ENGINE_API __declspec(dllimport)	/*!< needed for importing engine implementation to the client application */
	#endif
#else
	#error PLATFORM IS NOT WINDOWS!
#endif // !ENGINE_PLATFORM_WINDOWS
