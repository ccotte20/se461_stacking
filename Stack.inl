// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
//
// size
//
template <typename T>
inline
size_t Stack <T>::size (void) const
{
	return size_;
}

//
// top
//
template <typename T>
inline
T Stack <T>::top (void) const
{
	if(is_empty())
	{
		throw Stack::empty_exception();
	}
	else
	{
		return data_[top_];
	}
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
	return size_==0;
}