#include "HoneyComb.h"

double HoneyComb::getCoordinateX(std::size_t index, bool isAbove) const
{

}

double HoneyComb::getCoordinateY(std::size_t index, bool isAbove) const;

template <class T>
std::array<T&, NumberOfNearestNeighbor> HoneyComb::getNextNeighborSite();

template <class T>
std::array<const T&, NumberOfNearestNeighbor> HoneyComb::getNextNeighborSite() const;
