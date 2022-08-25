num = [1, 2, 3, 4, 5]
num
  .map((n) => n * 2)
  .forEach((n) => {
    console.log(n);
  });
let map = new Map();
map.set("vsp","web")
map.set("vyshak","android")
map.set("vinayak","ML")
map.set("vsp","blockchain")       // vsp has been updated by bc
console.log(map.has("vsp"));
console.log(map.has("ML"));
for(a of map)
console.log(a);

for([a] of map)
console.log(a);

for([a,b] of map)
console.log(a,b);

