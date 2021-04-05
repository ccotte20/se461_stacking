// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
//
// Dynamic_Array
//
template <typename T>
Dynamic_Array <T>::Dynamic_Array (void) : Array<T>()
{
	max_size_=this->cur_size_;
}

//
// Dynamic_Array
//
template <typename T>
Dynamic_Array <T>::Dynamic_Array (const Dynamic_Array <T> & arr) : Array<T>(arr), max_size_(arr.max_size_)
{
	
}

//
// Dynamic_Array
//
template <typename T>
Dynamic_Array <T>::Dynamic_Array (size_t length, T fill) : Array<T>(length, fill), max_size_(length)
{
	
}

//
// ~Dynamic_Array
//
template <typename T>
Dynamic_Array <T>::~Dynamic_Array (void)
{
	
}

//
// operator =
//
template <typename T>
const Dynamic_Array <T> & Dynamic_Array <T>::operator = (const Dynamic_Array & rhs)
{
	if(this!= &rhs)
	{
		delete [] this->data_;
		this->cur_size_ = rhs.size();
		this->max_size_ = rhs.max_size();
		this->data_ = new T[this->cur_size_];
		
		for(int i=0; i<this->cur_size_; i++)
		{
			this->data_[i]=rhs[i];
		}
	}
}

//
// resize
//
template <typename T>
void Dynamic_Array <T>::resize (size_t new_size)
{
	if (new_size == this->cur_size_)
	{
		return;
	}
	else if (new_size > this->cur_size_)
	{
		if ( new_size > this->max_size_)
		{
			T * temp = new T[new_size];
			
			for (int i=0; i < this->cur_size_; i++)
			{
				temp[i] = this->data_[i];
			}
			
			std::swap(temp, this->data_);
			
			this->cur_size_ = new_size;
			this->max_size_ = new_size;
			
			delete [] temp;
		}
		else
		{
			this->cur_size_ = new_size;
		}
	}
	else
	{
		this->cur_size_ = new_size;
	}
}