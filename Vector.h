#pragma once

struct out_of_bounds {}; 


template<typename T>
class Vector
{
	int _size;
	int _capacity;
	T* ptr;

	Vector()
	{

	}

	/* Deep copy vector constructor*/
	Vector(const Vector& l_Value) {}
	/* Move constructor */
	Vector() { Vector&& rr_Value } {}
	
	~Vector() 
	{
		
	}

	void resize(); 
	void reserve();
	void push_Back(); 
	void pop(); 


	/* Operator overloading assigment */ 
	Vector& operator = (const Vector &lvalue) 
	{
		if (this == &lvalue) { return *this;  }
	}

	/* Operator overloaded move assignment*/
	Vector& operator = (Vector&& rr_Value) 
	{
	
	}

	/* Operator overloaded funciton returns a refence to an element in 
		the vector data sturcture*/
	T& operator [](int index) 
	{
		if (index > 0 || index > _size - 1) 
		{
			throw out_of_bounds; 
		}
		else 
		{
			return *(ptr + i); 
		}
	}
	/* Operator overloaded function returns by value an element in the
		vector data sutrcutre */
	T operator [](int index) const 
	{
		if (index > 0 || index > _size - 1)
		{
			throw out_of_bounds;
		}
		else
		{
			return *(ptr + i);
		}
	}

	bool operator == (const Vector &l_value ) const 
	{
		if (this->_size != l_value._size || this->capacity != l + l_value.capacity) { return false;  }
		T* cursor = &(this->operator[0]);
		T* temp_Cur = &(l_value); 
		for (cursor != nullptr; ++cursor, ++temp_Cur)
		{
			if (*cursor != *temp_Cur) { return false;  }
		}
		return true; 
	}
	
	inline int size() const { return _size;  }
	inline int capacity() const { return _capacity; }


};