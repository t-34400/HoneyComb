#pragma once
#include <array>
#include <tuple>
#include <vector>

// the class for hexagonal lattice
// pair couplings in a certain direction, with one side up and one side down.

// x: corrdinate parallel to the unit coupling
// y: corrdinate perpendicular to the unit coupling
template <class T>
class HoneyComb
{
public:
	using honeyCombUnit_t = std::tuple<T, T>;

private:
	// number of honeycomb lattice units in the x direction
	int m_maxRow{};
	// number of honeycomb lattice units in the y direction
	int m_maxCol{};

	std::vector<honeyCombUnit_t> m_variables;

	static constexpr int NumberOfNearestNeighbor{ 3 };

public:
	HoneyComb();

	double getCoordinateX(std::size_t index, bool isAbove) const;
	double getCoordinateY(std::size_t index, bool isAbove) const;

	std::array<T&, NumberOfNearestNeighbor> getNextNeighborSite();
	std::array<const T&, NumberOfNearestNeighbor> getNextNeighborSite() const;
};

#include "HoneyComb.inl"