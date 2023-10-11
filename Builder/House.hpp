#ifndef HOUSE_HPP
#define HOUSE_HPP

#include "IHouseBuilder.hpp"

class IHouseBuilder;

class House 
{
	public:
		void	setWalls();
		void	setWindow();
		void	setDoor();
		void	setPool();
		void	setGarage();
		void	setGarden();
		bool	getWalls() const ;
		bool	getWindow() const ;
		bool	getDoor() const ;
		bool	getPool() const ;
		bool	getGarage() const ;
		bool	getGarden() const ;

	private:
		bool Walls;
		bool Window;
		bool Door;
		bool Pool;
		bool Garage;
		bool Garden;

	public: 
		House(IHouseBuilder &);
		House() = default;
};

#endif //HOUSE_HPP