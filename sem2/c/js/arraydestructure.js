let arr=[11,22,33,44]
var [a,b,c,d]=arr 
console.log(a);
words = "my name is legend vsp intelligent".split(' ')
var [a,b,c,d,e,f] = words
console.log(d,e);
// ... means rest of the elements after a,b,c - spread operator
var [a,b,c,...d] = words
console.log(d);