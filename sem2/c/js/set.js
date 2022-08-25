console.log(new Set("viiisssnnnuuu"));
nums= new Set()
nums.add(11)
nums.add(22)
nums.add(11)
nums.add("vsp")
nums.add("kabali")
console.log(nums);
for(n of nums){
    console.log(n);
}
console.log(nums.has("vsp"));
console.log(nums.has(10));

// has is used to chechi whether it is existing inside the Set 
