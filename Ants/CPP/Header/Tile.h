//
//
// Tile.h
//
// 

#include <vector>

using std::vector
using std::string

class Tile {

private:
	auto Tile;
	vector ID;

public:
	// all function should just return a pointer
	vector<> Get_Tile_ID();

	class Resource {
		auto Amount;
		auto Type;

		void Get_Amount();
		void Set_Amount();
		void Get_Type();
		void Set_Type();
	};

	class Ground {
		string Type;
	public:
		void Get_Ground_Type();
		void Set_Ground_Type();
	};

	class Base {
		bool is_base;
		bool is_base();
		class Building {

		};
	};
};