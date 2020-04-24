//
//
// Map.h
//
// 

#include Tile.h
#include <vector>

using std::vector

class Map {

private:
	auto Map_Height;
	auto Map_Width;
	std::vector<std::vector<Tile.Tile>> Map_Matrix;

public:
	void Get_Map_Height();
	void Get_Map_Width();
	void Set_Map_Height();
	void Set_Map_Width();
	void Pointer_To_Tile();

	class Generator {
		void Generate_Map();
	};
};
