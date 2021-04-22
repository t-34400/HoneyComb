#pragma once
#include <array>
#include <tuple>
#include <vector>

template <class T>
class HoneyComb
{
public:
	using honeyCombUnit_t = std::tuple<T, T>;

private:
	int m_maxRow{};
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