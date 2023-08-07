/*
  assigns arr & target as parameters, functions contains the variables low, high & middle all within their respective scopes.
  
*/
let arr = new Array();
function binarySearchAlgorithm(arr, target) {
    let low = 0;
    let high = arr.length - 1;
    while (low <= high) {
        var middle = Math.floor(low + high / 2);
        if (arr[middle] === target) {
            return middle;
        }
        if (arr[middle] > target) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    return -1;
}
console.log(binarySearchAlgorithm([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 10));
