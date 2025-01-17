// Author: Avery VanAusdal
// Assignment Number: Lab 2
// File Name: ArrayBag.h
// Course/Section: COSC 1337 Section 3
// Date: 9/16/2018
// Instructor: Bernard Ku

/** Header file for an array-based implementation of the ADT bag.
 @file ArrayBag.h */

#ifndef ARRAY_BAG_
#define ARRAY_BAG_

#include "BagInterface.h"

template<class ItemType>
class ArrayBag : public BagInterface<ItemType>
{
private:
	static const int DEFAULT_CAPACITY = 24; // Small size to test for a full bag
	ItemType items[DEFAULT_CAPACITY];      // Array of bag items
	int itemCount;                         // Current count of bag items 
	int maxItems;                          // Max capacity of the bag
   
	// Returns either the index of the element in the array items that
	// contains the given target or -1, if the array does not contain 
	// the target.
	int getIndexOf(const ItemType& target) const;   

public:
	ArrayBag();
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType& newEntry);
	bool remove(const ItemType& anEntry);
	void clear();
	bool contains(const ItemType& anEntry) const;
	int getFrequencyOf(const ItemType& anEntry) const;
	std::vector<ItemType> toVector() const;
	//Advanced member functions
	ArrayBag bagUnion(const ArrayBag& bagB) const;
	ArrayBag bagIntersection(const ArrayBag& bagB) const;
	ArrayBag bagDifference(const ArrayBag& bagB) const;
	
	ArrayBag bagUnionBonus(const ArrayBag& bagB) const;
}; // end ArrayBag

#include "ArrayBag.cpp"
#endif
