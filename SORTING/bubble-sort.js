function swap(array, a, b) {
    [array[a], array[b]] = [array[b], array[a]];
}
  
sort(originalArray) {
    const array = [...originalArray];
    for (let i = 1; i < array.length; i++) {
        let swapped = false;
        for (let j = 0; j < array.length - i; j++) {
            if (array[j + 1] < array[j]) {
                swap(array, j + 1, j);
                swapped = true;
            }
        }
        if (!swapped) {
            return array;
        }
    }
    return array;
}
