// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#ifndef _DYNAMIC_ARRAY_H_
#define _DYNAMIC_ARRAY_H_

#include "Array.h"

/**
 * @class Dynamic_Array
 *
 * Implementation of a fixed size array, i.e., one that is
 * resizeable. It is derived from Array so it can inherit of 
 * the Array class's methods.
 */
template <typename T>
class Dynamic_Array : public Array <T>
{
public:
  /// Default constructor.
  Dynamic_Array (void);

	/**
	 * Copy constructor.
	 *
	 * @param[in]      arr        Source array
	 */
  Dynamic_Array (const Dynamic_Array <T> & arr);

  /**
   * Initializing constructor. Fills the contents of the 
   * array with the specified \a fill value.
   *
   * @param[in]      length        Initial size
   * @param[in]      fill       The fill value.
   */
  Dynamic_Array (size_t length, T fill);

  /// Destructor.
  ~Dynamic_Array (void);
  
  /**
   * Assignment operation
   *
   * @param[in]       rhs      Right-hand side of equal sign
   * @return          Reference to self
   */
  const Dynamic_Array & operator = (const Dynamic_Array & rhs);
  
  /**
   * Retrieve the maximum size of the array.
   *
   * @return          The maximum size
   */
  size_t max_size (void) const;
  
  /**
   * Set a new size for the array. If \a new_size is less than the current
   * size, then the array is truncated. If \a new_size if greater then the
   * current size, then the array is made larger and the new elements are
   * not initialized to anything. If \a new_size is the same as the current
   * size, then nothing happens.
   *
   * The array's original contents are preserved regardless of whether the 
   * array's size is either increased or decreased.
   *
   * @param[in]       new_size              New size of the array
   */
  void resize (size_t new_size);
  
protected:
  /// Maximum size of the array.
  size_t max_size_;
};

// include the inline files
#include "Dynamic_Array.inl"

// include the source file since template class
#include "Dynamic_Array.cpp"

#endif   // !defined _DYNAMIC_ARRAY_H_