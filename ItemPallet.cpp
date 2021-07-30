#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "ItemPallet.hpp"

using std::string;
using std::ifstream;
using std::cout;
using std::endl;

// function to return the hash value based on the first digit
unsigned int hashfct1(unsigned int sku) {
  // TODO: implement this function, then delete the return statement below
  unsigned int hashValue;
  hashValue = sku / 100000;
	return hashValue;
}

// function to return the hash value based on the second digit
unsigned int hashfct2(unsigned int sku) {
   // TODO: implement this function, then delete the return statement below
   unsigned int hashValue;
   hashValue = sku % 100000;
   hashValue = hashValue / 10000;
	return hashValue;
}

// function to return the hash value based on the third digit
unsigned int hashfct3(unsigned int sku) {
   // TODO: implement this function, then delete the return statement below
   unsigned int hashValue;
   hashValue = sku % 10000;
   hashValue = hashValue / 1000;
	return hashValue;
}

// function to return the hash value based on the fourth digit
unsigned int hashfct4(unsigned int sku) {
   // TODO: implement this function, then delete the return statement below
   unsigned int hashValue;
   hashValue = sku % 1000;
   hashValue = hashValue / 100;
	return hashValue;
}

// function to return the hash value based on the fifth digit
unsigned int hashfct5(unsigned int sku) {
    // TODO: implement this function, then delete the return statement below
    unsigned int hashValue;
    hashValue = sku % 100;
    hashValue = hashValue / 10;
	return hashValue;
}

// function to return the hash value based on the fourth digit
unsigned int hashfct6(unsigned int sku) {
    // TODO: implement this function, then delete the return statement below
    unsigned int hashValue;
    hashValue = sku % 10;
	return hashValue;
}

// Constructor for struct Item
Item::Item(string itemName, unsigned int sku):itemName_(itemName), sku_(sku)
{};

// Load information from a text file with the given filename
// THIS FUNCTION IS COMPLETE
void ItemPallet::readTextfile(string filename) {
  ifstream myfile(filename);

  if (myfile.is_open()) {
    cout << "Successfully opened file " << filename << endl;
    string itemName;
    unsigned int sku;
    while (myfile >> itemName >> sku) {
			if (itemName.size() > 0)
      	addItem(itemName, sku);
    }
    myfile.close();
  }
  else
    throw std::invalid_argument("Could not open file " + filename);
}

void ItemPallet::addItem(string itemName, unsigned int sku) {
  // TO BE COMPLETED
  // function that adds the specified SKU to the pallet (i.e., to all hash tables)
  // typedef std::unordered_map<unsigned int, Item, decltype(&hashfct1)> CustomHashTable;
  // ItemPallet():
  // hT1{10,hashfct1},
  // hT2{10,hashfct2},
  // hT3{10,hashfct3},
  // hT4{10,hashfct4},
  // hT5{10,hashfct5},
  // hT6{10,hashfct6}{ }

  hT1[itemName, sku];
  hT2[itemName, sku];
  hT3[itemName, sku];
  hT4[itemName, sku];
  hT5[itemName, sku];
  hT6[itemName, sku];

}

bool ItemPallet::removeItem(unsigned int sku) {
   // TODO: implement this function, then delete the return statement below

  // function that removes the pair of glasses specified by the sku from the display
  // if pair is found, then it is removed and the function returns true
  // else returns false


    return true;
}

unsigned int ItemPallet::bestHashing() {
  // TODO: implement this function, then delete the return statement below
    
  // function that decides the best has function, i.e. the ones among
  // fct1-fct6 that creates the most balanced hash table for the current
  // ItemPallet data member allItems

	// Hints:
	// Calculate the balance of each hashtable, one by one.
	/*
	 for (unsigned i=0; i<10; ++i) {
    cout << hT1.bucket_size(i); // Call bucket_size() to get the size of each bucket
  }
	*/
	// Then, calculate the lowest balance
    
    
    return 100;

}

// ALREADY COMPLETED
size_t ItemPallet::size() {
    if ((hT1.size() != hT2.size()) || (hT1.size() != hT3.size()) || (hT1.size() != hT4.size()) || (hT1.size() != hT5.size())|| (hT1.size() != hT6.size()) )
  	throw std::length_error("Hash table sizes are not the same");
    
	return hT1.size();
}