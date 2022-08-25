// delete everything from 3rd index
arr=[00,11,22,33,44,55,66,77,88,99]
arr.splice(3)
console.log(arr);

// delete 2 elements from 3rd index
arr=[00,11,22,33,44,55,66,77,88,99]
arr.splice(3,2)
console.log(arr);

// add anything after the deletion
arr=[00,11,22,33,44,55,66,77,88,99]
arr.splice(3,4,9999,3333)
console.log(arr);