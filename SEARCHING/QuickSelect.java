package quick_select;

class QuickSelect 
{
	
	public static int partition(int[] arr, int low, int high) 
	{
		int pivot = arr[high];
		int pivotloc = low;
		
		for (int i = low; i <= high; i++)
		{
			if (arr[i] < pivot)
			{
				int temp = arr[i];
				arr[i] = arr[pivotloc];
				arr[pivotloc] = temp;
				pivotloc++;
			}
		}
		
		int temp = arr[high];
		arr[high] = arr[pivotloc];
		arr[pivotloc] = temp;
		
		return pivotloc;
	}
	
	public static int kthSmallest(int[] arr, int low, int high, int k)
	{
		int partition = partition(arr, low, high);
		
		if (partition == k)
		{
			return arr[partition];
		}
		else if (partition < k)
		{
			return kthSmallest(arr, partition + 1, high, k);
		}
		else
		{
			return kthSmallest(arr, low, partition-1, k);
		}
	}

	public static void main(String[] args) 
	{
		int[] array = new int[] {10, 4, 5, 8, 6, 11, 26};
		int[] arrayCopy = new int[]{10, 4, 5, 8, 6, 11, 26};
		
		int kPosition = 7;
		int length = array.length;
		
		if (kPosition > length)
		{
			System.out.println("Index out of bounds");
		}
		else
		{
			int kthSmallest = kthSmallest(arrayCopy, 0, length-1, kPosition-1);
			System.out.printf("K-th smallest in array: %d\n", kthSmallest);
		}
	}
}
