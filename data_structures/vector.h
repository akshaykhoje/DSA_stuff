#include <iostream>
using namespace std;

template <typename T>

class Vector
{
  // Data members
  T *arr;
  int curr_size;
  int max_capacity;
  // if curr_size == max_capacity, double the array size

  // constructor, destructor, methods
public:
  Vector(int max_size = 1) // constructor
  {
    curr_size = 0;
    max_capacity = max_size;
    arr = new T[max_capacity];
  }

  void push_back(const T data)
  {
    if (curr_size == max_capacity)
    {
      max_capacity *= 2;
      T *temp = arr;
      arr = new T[max_capacity];

      for (int i = 0; i < curr_size; i++)
        arr[i] = temp[i];

      delete[] temp;
    }
    arr[curr_size] = data;
    curr_size++;
  }

  void pop_back()
  {
    if (curr_size == 0)
      return;
    else if (curr_size > 0)
    {
      curr_size--;
      if (max_capacity / 2 == curr_size)
      {
        max_capacity /= 2;
        T *temp = arr;
        arr = new T[max_capacity];
        for (int i = 0; i < curr_size; i++)
          arr[i] = temp[i];
        delete[] temp;
      }
    }
  }

  // get front element
  const T front()
  {
    return arr[0];
  }

  const T back()
  {
    return arr[curr_size - 1];
  }

  const T at(int index)
  {
    if (index >= max_capacity)
    {
      cout << "Index out of bound" << endl;
      return -1;
    }
    return arr[index];
  }

  const int size()
  {
    return curr_size;
  }

  const int capacity()
  {
    return max_capacity;
  }

  T operator[](const int i)     // a keyword to overload [] - operator
  {
    return arr[i];
  }

};