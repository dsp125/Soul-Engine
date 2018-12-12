#pragma once

#include "Core/Structures/AbstractSparseSet.h"
#include "Composition/Entity/Entity.h"

#include <vector>

template <typename T>
class SparseMap {

public:

	SparseMap() = default;
	virtual  ~AbstractSparseEntitySet() = default;

	SparseMap(const SparseMap&) = delete;
	SparseMap(SparseMap &&) noexcept = default;

	SparseMap & operator=(const SparseMap &) = delete;
	SparseMap & operator=(SparseMap &&) noexcept = default;

	//operators
	SparseMap & operator=(const SparseMap &) = delete;
	SparseMap & operator=(SparseMap &&) noexcept = default;

	//get/set
	virtual void Remove(uint) = 0;

	bool Find(size_t);
	//operators

	//get/set
	void Remove(uint) override = 0;

protected:

	std::vector<Entity> dense_;
	std::vector<T> objects_;

};
#pragma once
