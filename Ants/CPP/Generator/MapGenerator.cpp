// 
//
// MapGenerator.cpp
//
//

#include MapGenerator.h
#include GameSettings.h

#include <iostream>

using namespace std;

void Generate_Map (){
	
	//
	// Steps:
	// Set Dimensions
	//

	Map::Set_Map_Height();
	Map::Set_Map_Width();

	// Set Player\Bases

	Set_Amount_of_Players(int Settings::Player)

}