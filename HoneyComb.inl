#pragma once

template <class T>
HoneyComb<T>::HoneyComb<T>()
{

}

template <class T>
double HoneyComb<T>::getCoordinateX(std::size_t index, bool isAbove) const
{
	
}

template <class T>
double HoneyComb<T>::getCoordinateY(std::size_t index, bool isAbove) const;

template <class T>
std::array<T&, HoneyComb<T>::NumberOfNearestNeighbor> HoneyComb<T>::getNextNeighborSite();

template <class T>
std::array<const T&, HoneyComb<T>::NumberOfNearestNeighbor> HoneyComb<T>::getNextNeighborSite() const;
