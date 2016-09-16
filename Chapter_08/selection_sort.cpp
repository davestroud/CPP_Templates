



























//**************************************************************
// Definition of function selectionSort.                       *
// This function performs an ascending order selection sort on *
// array. size is the number of elements in the array.         *
//**************************************************************

void selectionSort(int array[], int size) {
  int startScan, minIndex, minValue;

  for (startScan = 0; startScan < (size -1); startScan++)
  {
    minIndex = startScan;
    minValue = array[startScan];
    for (int index = startScan + 1; index < size; index++)
    {
      if (array[index] < minValue)
      {
        minValue = array[index];
        minIndex = index;
      }
    }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
  }
}
