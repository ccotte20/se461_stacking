// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#define DEFAULT_SIZE 10

// Dr. Ryan: If this is your Base Array you wouldn't want a Max Size here.
// Fixed: Moved Max size to dynamic array
//
// Array
//
template <typename T>
Array<T>::Array (void): data_(new T[DEFAULT_SIZE]), cur_size_(DEFAULT_SIZE)
{

}

//
// Array (size_t)
//
template <typename T>
Array<T>::Array (size_t length)
{
	if(length > 0)
	{
		this->data_ = new T[length];
		this->cur_size_ = length;
	}
}

//
// Array (size_t, char)
//
template <typename T>
Array<T>::Array (size_t length, T fill)
{
	if(length > 0)
	{
		this->data_ = new T[length];
		this->cur_size_ = length;
		this->fill(fill);
	}
}

//
// Array (const Array &)
//
template <typename T>
Array<T>::Array (const Array & arr) : data_(new T[arr.size()]), cur_size_(arr.size())
{
	for(int i=0; i<this->cur_size_; i++)
	{
		this->data_[i]=arr[i];
	}
}

//
// ~Array
//
template <typename T>
Array<T>::~Array (void)
{
	delete [] data_;
}

//
// operator =
//
template <typename T>
const Array<T> & Array<T>::operator = (const Array & rhs)
{
	if(this!= &rhs)
	{
		delete [] data_;
		this->cur_size_ = rhs.size();
		this->data_ = new T[this->cur_size_];
		
		for(int i=0; i<this->cur_size_; i++)
		{
			this->data_[i]=rhs[i];
		}
	}
}

//
// operator []
//
template <typename T>
T & Array<T>::operator [] (size_t index)
{
	if(0 <= index && index < this->cur_size_)
	{
		return this->data_[index];
	}
	else
	{
		throw std::out_of_range("Out of Range");
	}
}

//
// operator [] 
//
template <typename T>
const T & Array<T>::operator [] (size_t index) const
{
	if(0 <= index && index < this->cur_size_)
	{
		return this->data_[index];
	}
	else
	{
		throw std::out_of_range("Out of Range");
	}
}

//
// get
//
template <typename T>
T Array<T>::get (size_t index) const
{
	if(0 <= index && index < this->cur_size_)
	{
		return this->data_[index];
	}
	else
	{
		throw std::out_of_range("Out of Range");
	}
}

//
// set
//
template <typename T>
void Array<T>::set (size_t index, T value)
{
	if(0 <= index && index < this->cur_size_)
	{
		this->data_[index]=value;
	}
	else
	{
		throw std::out_of_range("Out of Range");
	}
}

//
// find (char)
//
template  <typename T>
int Array<T>::find (T value) const
{
	// Dr. Ryan: Need to handle our exception here - otherwise it gets back to the end-user.
	// Fixed: used try/catch statement to handle out of range exception thrown by indexed find
	try
	{
		find(value, 0);
	}
	catch(std::out_of_range oor)
	{
		std::cout<<"Out of Range"<<std::endl;
	}
}

//
// find (char, size_t) 
//
template <typename T>
int Array<T>::find (T val, size_t start) const
{
	if(0 <= start && start < this->cur_size_)
	{
		int i = static_cast<int>(start);
		for(i; i<this->cur_size_; i++)
		{
			if(this->data_[i]==val)
			{
				return i;
			}
		}
		return -1;
	}
	else
	{
		throw std::out_of_range("Out of Range");
	}
}

//
// operator ==
//
template <typename T>
bool Array<T>::operator == (const Array & rhs) const
{
	if(this == &rhs)
	{
		return true;
	}
	else if(this->cur_size_!=rhs.size())
	{
		return false;
	}
	else
	{
		for(int i=0; i<this->cur_size_; i++)
		{
			if(this->data_[i]!=rhs[i])
			{
				return false;
			}
		}
		return true;
	}
}

//
// operator !=
//
template <typename T>
bool Array<T>::operator != (const Array & rhs) const
{
	return !(*this==rhs);
}

//
// fill
//
template <typename T>
void Array<T>::fill (T value)
{
	for(int i=0; i<this->cur_size_; i++)
	{
		this->data_[i]=value;
	}
}