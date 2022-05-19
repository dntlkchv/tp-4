template <typename T>
void inverse(T* A, int size) {
	int mid = size / 2;

	for (int i = 0; i < mid; i++)
	{
		T tmp = A[i];
		A[i] = A[size - i - 1];
		A[size - i - 1] = tmp;
	}
}