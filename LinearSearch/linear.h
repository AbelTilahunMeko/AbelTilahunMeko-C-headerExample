int linearSearch(int array[], int size, int searchValue)
{
    for(int i = 0; i < size; i++)
    {
        if (searchValue == array[i])
        {
            return i;
        }
    }

    return -1;
}
